#include "main.h"

/**
 * Description: _isdigit - function to check capital letters.
 * @c: value passed to the function.
 * Return: (1) if true (0) if false.
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
