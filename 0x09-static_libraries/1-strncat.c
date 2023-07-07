#include "main.h"
/**
 * *_strncat - functiom to concatenatr two strings.
 * @dest: pointer to string dest.
 * @src: pointer to string src.
 * @n: represenys bytes.
 * Return: (dest) string to be returned.
 */


char *_strncat(char *dest, char *src, int n)
{
	int len_str, i;

	len_str = 0;
	while (dest[len_str] != '\0')
		len_str++;
	for (i = 0; src[i] != '\0' && i < n; i++, len_str++)
		dest[len_str] = src[i];

	dest[len_str] = '\0';
	return (dest);
}
