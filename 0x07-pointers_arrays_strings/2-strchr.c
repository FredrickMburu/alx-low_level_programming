#include "main.h"

/**
 * _strchr - function returns first occurence of char
 * c in the string s.
 * @s: string to be searched.
 * @c: char to be found.
 * Return: ('/0') if c is not found ,
 * if found returns a pointer to first occurence.
 */


char *_strchr(char *s, char c)
{
	int j;

	j = 0;

	while (s[j] >= '\0')
	{
		if (s[j] == c)
			return (s + j);
	}

	return ('\0');
}
