#include "main.h"

/**
 * puts_half - function to print odd half string.
 * @str: pointer to value of string.
 */

void puts_half(char *str)
{
	int length, mid;

	length = 0;

	while (str[length])
		length++;
	mid = length / 2;

	if (length % 2 == 1)
		mid++;
	while (mid < length)
	{
		_putchar(str[mid]);
		mid++;
	}
	_putchar('\n');
}
