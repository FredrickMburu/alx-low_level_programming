#include "main.h"

/**
 * *leet - function to encode string.
 * @z: string to be encoded.
 * Return: (z) encoded string returned to main function,
 */


char *leet(char *z)
{
	int i, j;
	char letters[] = "AEOTL";
	char leet_chars[] = "43071";

	i = 0;
	while (z[i])
	{
		j = 0;
		while (letters[j])
		{
			if (z[i] == letters[j] || z[i] == letters[j] + 32)
				z[i] = leet_chars[j];
			j++;
		}
		i++;
	}
	return (z);
}

