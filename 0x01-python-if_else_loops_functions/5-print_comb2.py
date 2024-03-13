#!/usr/bin/python3
for i in range(100):
<<<<<<< HEAD
    if i == 99:
        print("{}".format(i))
    else:
        print("{:02d}, ".format(i), end='')
=======
    if i < 99:
        print("{:02d}".format(i), end=', ')
    else:
        print("{:02d}\n".format(i))
>>>>>>> afd53f7c9083fa78dff4abb422c0155e4421cafd
