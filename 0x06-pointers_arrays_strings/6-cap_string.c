#include "main.h"

/**
 * *cap_string - function to capitalise.
 * @z: pointer to string to capitalise.
 * Return: (z) returms the capitalised character.
 */

char *cap_string(char *z)
{

	int str_count;

	str_count = 0;
	while (z[str_count] != '\0')
	{
		if (z[0] >= 97 && z[0] <= 122)
			z[0] = z[0] - 32;

		if ((z[str_count] == ' ') || (z[str_count] == '\t') || (z[str_count] == '\n')
				|| z[str_count] == ','
				(z[str_count] == ';') || (z[str_count] == '.') || (z[str_count] == '!')
				|| z[str_count] == '?'
				(z[str_count] == '"') || (z[str_count] == '(') || (z[str_count] == ')')
				|| (z[str_count] == '{')
				|| (z[str_count] == '}'))
		{
			if (z[str_count + 1] >= 97 && z[str_count + 1] <= 122)
				z[str_count + 1] = z[str_count + 1] - 32;

		}
		str_count++;
	}
	return (z);
}

