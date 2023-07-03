#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: the string where the substring is
 * being searched for.
 * @needle: substring that is being searched for.
 *
 * Return: a pointer to the beginning of the located substring
 * , or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack == *n && *n != '\0')
		{
			haystack++;
			n++;
		}

		if (*n == '\0')
			return (h);

		haystack = h + 1;
	}

	return ('\0');
}
