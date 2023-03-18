#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *
 *
 **/
int **alloc_grid(int width, int height)
{
int **grid = malloc(sizeof(int *) * height);
int i = 0;
int j = 0;

if (width <= 0 || height <= 0)
{
return (NULL);
}
if (grid == NULL)
{
return (NULL);
}
for (; i < height; i++)
{
grid[i] = calloc(width, sizeof(int));
if (grid[i] == NULL)
{
for (; j < i; j++)
{
free(grid[j]);
}
free(grid);
return NULL;
}
}
return grid;
}
