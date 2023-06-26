#include "main.h"

/**
 * *_strcpy - function to copy a a string.
 * @dest: destination to where the file is copied.
 * @src: pointer to the original string.
 * Return: (dest) returns coped string to main.
 */


char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');

	return (dest);
}
