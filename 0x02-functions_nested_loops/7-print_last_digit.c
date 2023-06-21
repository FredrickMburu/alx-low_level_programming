#include "main.h"
/**
 * Description: print_last_digit - prints the last digit.
 * @j: brings the value to the function.
 * Return: value of the last digit.
 */


int print_last_digit(int j)
{
int last;
last = j % 10;

if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
