#include "main.h"

/**
 * *cap_string - function to capitalise.
 * @z: pointer to string to capitalise.
 * Return: (z) returms the capitalised character.
 */

char *cap_string(char *z)
{

	int i;

	i = 0;
	while (z[i] != '\0')
	{
		if (z[0] >= 97 && z[0] <= 122)
			z[0] = z[0] - 32;
		if (z[i] == ' ' || z[i] == '\t' || z[i] == '\n' ||
				z[i] == ',' || z[i] == ';' || z[i] == '.' ||
				z[i] == '!' || z[i] == '?' || z[i] == '"' ||
				z[i] == '(' || z[i] == ')' || z[i] == '{' || z[i] == '}')
		{
			if (z[i + 1] >= 97 && z[i + 1] <= 122)
				z[i + 1] = z[i + 1] - 32;

		}
		i++;
	}
	return (z);
}

