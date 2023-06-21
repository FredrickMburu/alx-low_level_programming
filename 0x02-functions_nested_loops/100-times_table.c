#include "main.h"

/**
 * Description: print_times_table - prints multiple table.
 * @n: value copied to the function
 * Return: returns th whole table
 */

void print_times_table(int n)
{
int mult, num, prod;

if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');
for (mult = 1; mult <= n; mult++)
{
_putchar('.');
_putchar(' ');
prod = mult * num;
if (prod <= 99)
_putchar(' ');
if (prod <= 9)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10)) % 10 + '0');
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}

