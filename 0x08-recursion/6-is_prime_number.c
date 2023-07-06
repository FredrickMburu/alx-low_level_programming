#include "main.h"
int _prime_calc(int n, int j);
/**
 * is_prime_number - function to find prime numbers.
 * @n: value passed to the function.
 * Return: (0) if number is not prime,
 * otherwise return (1).
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime_calc(n, 2));
}

/**
 * _prime_calc - function to check if no is prime.
 * @n: value to be checked.
 * @j: valuen to be incremented until n is reached.
 * Return: (0) if number is not prime,
 * otherwise return (1).
 */

int _prime_calc(int n, int j)
{
	if (j == n)
		return (1);

	if (n % j == 0)
		return (0);

	return (_prime_calc(n, j + 1));
}
