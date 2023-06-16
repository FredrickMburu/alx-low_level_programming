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

for (j = 'a'; j <= 'z'; j++)
{
if (j == 'q')
continue;
else if (j == 'e')
continue;
putchar(j);
}
putchar('\n');
return (0);
}
