#!/usr/bin/python3
'''island perimeter'''


def island_perimeter(grid):
    '''finding the perimeter of an island'''
    count = 0
    start_i = [0, 0]
    x, y = 0, 0
    series = 0

    for i in range(1, len(grid)):
        for j in range(1, len(grid[i])):
            if grid[i][j] == 1:
                if count == 0:
                    series = 1
                    start_i[0] = i
                    start_i[1] = j
                if series and i == start_i[0]:
                    x += 1
                count += 1
            elif i == start_i[0]:
                series = 0
    if x != 0:
        y = count // x
    return (2 * x) + (2 * y)