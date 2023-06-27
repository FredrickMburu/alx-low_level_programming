#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - entry point in the program.
 *
 * Return: (0) terminates progaram after execution.
 */

int main(void)
{
	char pass[6];
	int j;

	srand(time(NULL));

	for (j = 0; j < 6; j++)
	{
		pass[j] = rand() % 127;
	}

	pass[5] = '\0';

	printf("%s\n", pass);

	return (0);
}

