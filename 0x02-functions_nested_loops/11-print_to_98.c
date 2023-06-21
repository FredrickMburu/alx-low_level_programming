#include "main.h"
#include <stdio.h>
/**
 * Description: print_to_98 - print from n to 98.
 * @n: passes the value  to the print_to_98 function
 * Return: returns the values to the main,
 */


void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
}

