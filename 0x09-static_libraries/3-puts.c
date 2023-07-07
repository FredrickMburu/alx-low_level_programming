#include "main.h"

/**
 * _puts - function to print a string.
 * @str: passes the value of str
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
