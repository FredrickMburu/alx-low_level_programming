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
int k;

for (j = 0; j <= 8; j++)
{
for (i = j + 1; i <= 9; i++)
{
for (k = i + 1; k <= 9; k++)
{
putchar(j + '0');
putchar(i + '0');
putchar(k + '0');
if (j != 7 || i != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
