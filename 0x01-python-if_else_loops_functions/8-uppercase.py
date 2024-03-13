#!/usr/bin/python3
def uppercase(s):
    for char in s:
        temp = char
        if ord(temp) >= 97 and ord(temp) <= 122:
            temp = chr(ord(char) - 32)
        print("{}".format(temp), end='')
    print()
