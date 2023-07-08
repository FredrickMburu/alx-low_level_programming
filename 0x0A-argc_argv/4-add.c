#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry to the program.
 * @argc: counts the no of argumets in command line.
 * @argv: a char pointer that passes the commands in the
 * commmand line to the main function.
 * Return: (0) exits the program after completion.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}


		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);


}
