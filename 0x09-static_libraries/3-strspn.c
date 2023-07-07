#include "main.h"

/**
 * _strspn -function tht returns no of bytes
 * from initial segment of s.
 * @s: string to be searched.
 * @accept: prefix to be measured.
 *
 * Return: the number of bytes in the initial segment
 *  of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				bytes++;
				break;
			}
			if (accept[j + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
