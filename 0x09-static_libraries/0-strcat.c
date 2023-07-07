#include "main.h"
/**
 * *_strcat - functiom to concatenatr two strings.
 * @dest: pointer to string dest.
 * @src: pointer to string src.
 * Return: (dest) string to be returned.
 */


char *_strcat(char *dest, char *src)
{
	int len_str, i;

	len_str = 0;
	while (dest[len_str] != '\0')
		len_str++;
	for (i = 0; src[i] != '\0'; i++, len_str++)
		dest[len_str] = src[i];

	dest[len_str] = '\0';
	return (dest);
}
