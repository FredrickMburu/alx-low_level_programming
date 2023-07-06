#include "main.h"
int _sqrt(int n, int j);

/**
 * _sqrt_recursion - function to find aquareroot.
 * @n: value passsed to the function.
 * Return: (-1) if sqrt  is not natural number,
 * otherwise return the sqrt.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt(n, 1));
}

/**
 * _sqrt - function that calculates the sqrt.
 * @n: value passed to function.
 * @j: value to be incremented if aqrt is not found.
 * Return: (-1) if sqrt  is not natural number,
 * otherwise return the sqrt.
 */


int _sqrt(int n, int j)
{
	if (j * j > n)
		return (-1);
	else if (j * j == n)
		return (j);
	else
		return (_sqrt(n, j + 1));
}
