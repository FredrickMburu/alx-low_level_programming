#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description: main - entry point.
 * Return: 0 exits the program after execution
 */
int main(void)
{
int j;
int i;

for (j = 0; j <= 8; j++)
{
for (i = j + 1; i <= 9; i++)
{
putchar(j + '0');
putchar(i + '0');
if (j != 8 || i != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
