#!/usr/bin/python3
""" perimeter of the island described in grid"""

def island_perimeter(grid):
    """
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    """
    height = len(grid)
    width = len(grid[0])
    
    perimeter = 0
    
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                # Count the top edge
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Count the bottom edge
                if i == height - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # Count the left edge
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Count the right edge
                if j == width - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    
    return perimeter
