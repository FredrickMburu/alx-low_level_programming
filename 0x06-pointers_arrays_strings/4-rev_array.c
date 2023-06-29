#include "main.h"

/**
 * reverse_array - a function to reverse array.
 * @a: pointer to a n array.
 * @n: elements in the array.
 */

void reverse_array(int *a, int n)
{
	int count, temp;

	n = n - 1;
	count = 0;

	while (count <= n)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}
}
