#!/usr/bin/python3
""" island perimeter module """


def island_perimeter(grid):
    """ that returns the perimeter of the island described in grid """

    perimeter = 0
    for x, line in enumerate(grid[1:-1]):
        x += 1
        for y, cell in enumerate(line[1:-1]):
            y += 1
            if grid[x][y+1] == 0 and grid[x][y] == 1:
                perimeter += 1
            if grid[x][y-1] == 0 and grid[x][y] == 1:
                perimeter += 1
            if grid[x+1][y] == 0 and grid[x][y] == 1:
                perimeter += 1
            if grid[x-1][y] == 0 and grid[x][y] == 1:
                perimeter += 1

    return perimeter
