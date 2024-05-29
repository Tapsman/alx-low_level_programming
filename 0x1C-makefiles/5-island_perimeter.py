#!/usr/bin/python3
"""A function that returns the perimeter of island in grid"""


def island_perimeter(grid):
    """It then returns the perimeter of island discussed in grid"""
    height = len(grid)
    width = len(grid)
    size = 0
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size = size + 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges = edges + 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges = edges + 1
    return ((size * 4) - (edges * 2))
