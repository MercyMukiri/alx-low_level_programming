#!/usr/bin/python3
""" This module returns the perimeter of the island decribed in grid"""


def island_perimeter(grid):
    """ This function returns the perimeter of the island described in grid"""

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += get_surrounding_water(grid, i, j)

    return perimeter


def get_surrounding_water(grid, i, j):
    """Ths function returns the number of sides surrounded by water"""
    water_sides = 0

    if grid[i][j + 1] == 0 or j >= len(grid[i]) - 1:
        water_sides += 1
    if grid[i - 1][j] == 0 or i <= 0:
        water_sides += 1
    if grid[i][j - 1] == 0 or j <= 0:
        water_sides += 1
    if grid[i + 1][j] == 0 or i >= len(grid) - 1:
        water_sides += 1

    return water_sides
