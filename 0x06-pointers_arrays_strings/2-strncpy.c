#include "main.h"

/**
 * *_strncpy - function for copying to another string.
 * @dest: pointer to destination string.
 * @src: pointer to src string.
 * @n: counter to bytes in string.
 * Return: (dest) returns dest string to main.
 */



char *_strncpy(char *dest, char *src, int n)
{
	int byte_count;

	for (byte_count = 0; src[byte_count] != '\0' && byte_count < n; byte_count++)
		dest[byte_count] = src[byte_count];

	for (; byte_count > n; byte_count++)
		dest[byte_count] = '\0';

	return (dest);
}

