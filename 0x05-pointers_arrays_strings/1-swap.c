#include "main.h"

/**
 * swap_int - function that swaps.
 * @a: holds value of a.
 * @b: holds value of b.
 */

void swap_int(int *a, int *b)
{
	int s;
	s = *a;
	*a = *b;
	*b = s;
}


