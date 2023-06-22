#include "main.h"

/**
 * Description: print_diagonal - prints diagonal lines.
 *
 * @n: value passed to the function.
 */


void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
