#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **mee;
int k, y;
if (width <= 0 || height <= 0)
return (NULL);
mee = malloc(sizeof(int *) * height);
if (mee == NULL)
return (NULL);
for (k = 0; k < height; k++)
{
mee[k] = malloc(sizeof(int) * width);
if (mee[k] == NULL)
{
for (; k >= 0; k--)
free(mee[k]);
free(mee);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (y = 0; y < width; y++)
mee[k][y] = 0;
}
return (mee);
}
