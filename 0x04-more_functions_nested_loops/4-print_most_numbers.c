#include "main.h"

/**
 * Description: print_most_numbers - fprint from 0 to 9.
 *
 */

void print_most_numbers(void)
{

	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
