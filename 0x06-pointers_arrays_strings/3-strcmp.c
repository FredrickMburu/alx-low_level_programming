#include "main.h"

/**
 * _strcmp - function to compare if string is identical.
 * @s1: pointer to first string.
 * @s2: pointer to second sting.
 * Return: (compare) returns to the main function.
 */



int _strcmp(char *s1, char *s2)
{
	int i, compare;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	compare = s1[i] - s2[i];

	return (compare);
}
