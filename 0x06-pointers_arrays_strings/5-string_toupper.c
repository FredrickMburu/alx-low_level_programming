#include "main.h"
/**
 * *string_toupper - function to change string to upper case.
 * @z: pointer to string.
 * Return: (z) return string as uppercase.
 */

char *string_toupper(char *z)
{
	int len;

	len = 0;
	while (z[len] != '\0')
	{
		if (z[len] >= 97 && z[len] <= 122)
			z[len] = z[len] - 32;
		len++;
	}
	return (z);

}
