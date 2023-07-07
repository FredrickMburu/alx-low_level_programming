#include "main.h"


/**
 * Description: _abs - calculate the absolute value of an integer.
 * @c: the number o be computed.
 * Return: absolute value  or zero.
 */

int _abs(int c)
{
if (c < 0)
{
int absolute;
absolute = c * -1;

return (absolute);
}
return (c);
}
