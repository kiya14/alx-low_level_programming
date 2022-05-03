#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - points to a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 * Return: an integer pointer
 */
int **alloc_grid(int width, int height)
{
int i, j, r;
int **dest;

if (width <= 0 || height <= 0)
return (NULL);

dest = malloc(height * sizeof(int *));

if (dest == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
dest[i] = malloc(width * sizeof(int));
if (dest[i] == NULL)
{
for (r = 0; r < height; r++)
free(dest[r]);
free(dest);
return (NULL);
}
for (j = 0; j < width; j++)
{
dest[i][j] = 0;
}
free(dest[j]);
}
return (dest);
}
