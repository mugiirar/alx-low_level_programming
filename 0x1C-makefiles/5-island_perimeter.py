#!/usr/bin/python3

def island_perimeter(grid):
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
