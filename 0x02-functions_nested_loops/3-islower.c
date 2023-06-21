#include "main.h"

/**
 * Description: _islower - checks for lower and upper case.
 * @c: - character that is checked.
 * Return: (0) for upper case and  (1) for lower case.
 */


int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}

return (0);
}
