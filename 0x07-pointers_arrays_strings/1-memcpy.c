#include "main.h"

/**
 * _memcpy - function to copy bytes
 * from src to dest.
 *
 * @n: value being copied
 * @dest: the mem area being copied to.
 * @src: bytes copied from .
 * Return: (dest) a pointer to dest,
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
