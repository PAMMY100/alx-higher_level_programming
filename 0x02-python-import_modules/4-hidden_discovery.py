#!/usr/bin/python3
import dis
def print_names(filename):
    with open(filename, 'rb') as file:
        code = file.read()
        instructions = dis.get_instructions(code)
        names = set()
        for instruct in instructions:
            if instruct.opname == 'LOAD_NAME' and not instruct.argval.startswith('__'):
                names.add(instruct.argval)
    for name in sorted(names):
        print(name)
if __name__ == "__main__":
    print_names("hidden_4.pyc")
