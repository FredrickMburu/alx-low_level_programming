#include <stdio.h>

/**
 * Description: main - entry point
 * Return: (0) terminates the program after execution.
 */

int main(void)
{
int i, j = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
j += i;
}
i++;
}
printf("%d\n", j);
return (0);
}
