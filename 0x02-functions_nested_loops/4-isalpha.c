#include "main.h"

/**
 * Description: _isalpha - checks for lower and upper case.
 * @c: - character that is checked.
 * Return: (0) for non letters  and  (1) for letters.
 */


int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}

return (0);
}
