#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 *  two diagonals of a square matrix of integers.
 *
 * @a: matrix of integers.
 * @size: size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int index, sum = 0, sum1 = 0;

	index = 0;
	while (index < size)
	{
		sum += a[index];
		a += size;
		index++;
	}
	a -= size;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum, sum1);
}

