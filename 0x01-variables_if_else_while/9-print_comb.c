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

for (j = '0'; j <= '9'; j++)
{
putchar(j);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
