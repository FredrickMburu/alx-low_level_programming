#include "main.h"

/**
 * _atoi - function that prints number from string.
 * @s: pointer to character s.
 * Return: (n * sign)  returns the value as a digit,
 */

int _atoi(char *s)
{
	int sign = 1;
	int n = 0;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;

	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - '0');
		s++;
	}

	return (n * sign);
}

