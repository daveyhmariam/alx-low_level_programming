#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of integers.
 * @width: column of the array
 * @height: row of the array
 * Return: NULL on failure
 * Pointer to 2D array of int
*/
int **alloc_grid(int width, int height)
/*{
int **arr[width];
int r, c, ptr;
r =  0;
c = 0;
ptr = 0;
if (width <= 0 || height <= 0)
return (NULL);
while (r < width)
{
arr[r] = (int *) malloc(sizeof(int) * height);
if
}
}*/
{
int r, c, ptr;
int **arr;
r = 0;
c = 0;
ptr = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}
arr = (int **) malloc (sizeof(int *) * width);
if (!arr)
{
free(arr);
return (NULL);
}
for (; ptr < width; ptr++)
{
arr[ptr] = (int *) malloc (sizeof(int) * height);
if (!arr[ptr])
{
for (; ptr >= 0; ptr--)
{
free (arr[ptr]);
}
free (arr);
return (NULL);
}
}
for (; r < width; r++)
{
for (; c < height; c++)
{
arr[r][c] = 0;
}
}
return (arr);
}
