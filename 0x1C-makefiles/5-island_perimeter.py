#!/usr/bin/python3
"""
doc
This is the 5-island_perimeter module.
"""


def island_perimeter(grid):
    """ island_perimeter def """
    count = 0
    max_i = len(grid)
    max_j = len(grid[0])

    for i in range(max_i):
        for j in range(max_j):
            element = grid[i][j]
            elem_right = 0
            elem_down = 0
            if j < max_j - 1:
                elem_right = grid[i][j + 1]
            if i < max_i - 1:
                elem_down = grid[i + 1][j]

            if (i == 0 or i == max_i - 1) and element != 0:
                count = count + 1
            if (j == 0 or j == max_j - 1) and element != 0:
                count = count + 1

            if j != max_j - 1:
                if element != elem_right:
                    count = count + 1

            if i != max_i - 1:
                if element != elem_down:
                    count = count + 1

    return count
