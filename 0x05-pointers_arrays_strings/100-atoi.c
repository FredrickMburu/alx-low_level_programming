#include "main.h"

/**
 * _atoi - function that prints number from string.
 * @s: pointer to character s.
 * Return: (result * sign)  returns the value as a digit,
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > (INT_MAX - (s[i] - '0')) / 10)
			{
				if (sign == -1)
					return -INT_MAX - 1;
				else
					return INT_MAX;
			}

			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}

	return (result * sign);
}

