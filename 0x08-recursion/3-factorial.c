#include "main.h"
/**
 * factorial - function that returns the
 *  factorial of a given number.
 *
 *  @n: value ,factorial is being found.
 *  Return: (-1) if n is negative,(1) if
 *  value is 1 and the factorial of n for
 *  graeter positive numbers.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
