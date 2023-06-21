#include "main.h"


/**
 * Description: print_alphabet_x10 - print alphabet.
 * Return: 0 exits the program after execution
 */

void print_alphabet_x10(void)
{
int k;
char j;

for (k = 1; k <= 10; k++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
