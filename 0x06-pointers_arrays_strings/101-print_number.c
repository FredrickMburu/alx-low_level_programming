#include "main.h"

/**
 * Description: print_number - function for printing.
 *
 * @n: value passed to function.
 */

void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		_putchar(45);
		j = -j;
	}
	if (j / 10)
		print_number(j / 10);

	_putchar((j % 10) + '0');
}
