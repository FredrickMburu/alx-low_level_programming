#include "main.h"

/**
 * Description: _isupper - function to check capital letters.
 * @c: value passed to the function.
 * Return: (1) if true (0) if false.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
