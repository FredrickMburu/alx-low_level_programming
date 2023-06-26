#include "main.h"
/**
 * puts2 - function to print char.
 * @str: passes string to function
 */


void puts2(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		if (str[length] % 2 == 0)
			_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}

