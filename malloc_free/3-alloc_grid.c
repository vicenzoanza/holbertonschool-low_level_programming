#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: NULL if width or height = 0.
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
return (NULL);
}
}
return (grid);
}
