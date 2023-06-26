#include "main.h"

/**
 * rev_string - function to reverse string.
 * @s: string passed to function.
 */


void rev_string(char *s)
{
	int mid, length, j;
	char tmp;

	length = 0;

	while (s[length])
		length++;
	mid = length / 2;
	j = 0;

	while (mid--)
	{
		tmp = s[length - j - 1];
		s[length - j - 1] = s[j];
		s[j] = tmp;
		j++;
	}
}
