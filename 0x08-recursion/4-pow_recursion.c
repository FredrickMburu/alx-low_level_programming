#include "main.h"

/**
 * _pow_recursion - function that returns the
 * value of x raised to the power of y.
 * @x: the number being raised to the value of n.
 * @y: the power of x.
 *
 * Return: (-1)if the number is < y,(1) if y == 0,
 * otherwise return the power of x.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
