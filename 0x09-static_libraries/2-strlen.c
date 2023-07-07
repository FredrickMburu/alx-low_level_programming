#include "main.h"

/**
 * _strlen - function to count characters.
 *@s: character s passed to function.
 *Return: length value to be returned.
 */


int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length])
		length++;

	return (length);
}

