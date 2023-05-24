#!/usr/bin/python3
""" function that defines perimeter of an island"""


def island_perimeter(grid):
    """
    prints perimaeter of island with 0 being water area and 1 land area
    Args:
        grid: list of list of integers.
    Returns
        perimeter of the island defined in grid.
    """
    cel_length = 0
    cel_height = 0
    width = len(grid[0])
    height = len(grid)

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                cel_height += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    cel_length += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    cel_length += 1
    return cel_height * 4 - cel_length * 2
