#include <stdio.h>

/**
 * Description: main - entry point,
 * Description: fibonacci - the fibonacci function.
 * Return: (0) terminates program after execution.
 * @n: copies value to the function.
 */
void fibonacci(int n); 
int main(void)
{
fibonacci(50);
return (0);
}

void fibonacci(int n)
{
int a = 1;
int b = 2;
printf("%d, %d", a, b);
int next;
for (int i = 0; i <= n; i++)
{
next = a + b;
printf(", %d", next);
a = b;
b = next;
}
}
