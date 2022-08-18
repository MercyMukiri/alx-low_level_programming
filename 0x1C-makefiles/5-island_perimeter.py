#!/usr/bin/python3
""" This module returns the perimeter of the island decribed in grid"""


def island_perimeter(grid):
    """
    This function returns the perimeter of the island described in grid

    Args:
        grid (list): A list of list of integers representing an island.

    Return:
        The perimeter of the island
    """

    land = 0
    edge = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                land += 1

                if grid[i - 1][j] == 1 and i > 0:
                    edge += 1
                if grid[i][j - 1] == 1 and j > 0:
                    edge += 1

    return land * 4 - edge * 2
