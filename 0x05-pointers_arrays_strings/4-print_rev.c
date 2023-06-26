#include "main.h"

/**
 * print_rev - function to print a string.
 * @s: passes the value of s
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
