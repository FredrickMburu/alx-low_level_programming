#include "main.h"

/**
 * Description: print_square - prints diagonal lines.
 *
 * @size: value passed to the function.
 */


void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
