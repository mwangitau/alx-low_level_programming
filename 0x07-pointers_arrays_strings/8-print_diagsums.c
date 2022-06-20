#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, w, z = 0, u = 0;

	for (x = 0; x < size; x++)
	{
		w = (x * size) + x;
		z += *(a + w);
	}
	for (y = 0; y < size; y++)
	{
		w = (y * size) + (size - 1 - y);
		u += *(a + w);
	}
	printf("%x, %x\n", z, u);
}
