#include "main.h"
/**
 * *_memset - function of filling mem with const byte.
 * @s: mem area to be filled.
 * @b: value to be copied.
 * @n: no of times to copy b.
 *
 * Return: (s) pointer to mem area.
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;

	return (s);
}
