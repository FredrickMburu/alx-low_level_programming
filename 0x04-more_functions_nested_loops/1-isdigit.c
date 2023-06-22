#include "main.h"

/**
 * Description: _isdigit - function to check capital letters.
 * @c: value passed to the function.
 * Return: (1) if true (0) if false.
 */


int _isdigit(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
