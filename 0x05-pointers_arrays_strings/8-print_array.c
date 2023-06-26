#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print array.
 * @a: pointer of a.
 * @n: size of the array;
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
