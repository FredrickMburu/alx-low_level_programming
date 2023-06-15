#include<stdio.h>
/**
 * Description: main - outputs the size of data types.
 * Return: 0 exits the program after execution.
 */
int main(void)
{
char i;
int j;
long int m;
long long int l;

printf("Size of a char: %d byte(s)\n", sizeof(i));
printf("Size of a int: %d byte(s)\n", sizeof(j));
printf("Size of a float: %d byte(s)\n", sizeof(float));
printf("Size of a long int: %d byte(s)\n", sizeof(m));
printf("Size of a long long int: %d byte(s)\n", sizeof(l));
return (0);
}
