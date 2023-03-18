#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid.
 * @grid : the address of the two dimensional grid.
 * @height: height of the array.
 **/
void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
