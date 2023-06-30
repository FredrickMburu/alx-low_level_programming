#include "main.h"

/**
 * *rot13 - function to encode string to rot13.
 * @string: string to be encoded.
 * Return: (string) string to be returned after encoding.
 */



char *rot13(char *string)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, j;

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (string[i] == in[j])
			{
				string[i] = out[j];
				break;
			}
		}
	}
	return (string);
}

