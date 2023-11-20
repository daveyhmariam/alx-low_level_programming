#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    """
    Prints list elements

    Args:
        my_list: list
        x: number of elements to be printed

    Return: number of elements printed
    """
    for i in range(x):
        try:
            print("{:d}".format(my_list[i]), end="")
        except IndexError as e:
            return i
    print("")
    return x