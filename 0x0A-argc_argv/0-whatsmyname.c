#include "main.h"
#include <stdio.h>

/**
 * main - entry to the program.
 * @argc: counts the no of argumets in command line.
 * @argv: a char pointer that passes the commands in the
 * commmand line to the main function.
 * Return: (0) exits the program after completion.
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}

