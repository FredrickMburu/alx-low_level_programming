#include "main.h"

/**
 * Description: print_line - print a line n number of times.
 * @n: passes n value to function.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
