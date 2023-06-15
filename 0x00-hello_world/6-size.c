#include<stdio.h>
/**
 * Description: main - outputs the size of data types.
 * Return: 0 exits the program after execution.
 */
int main(void)
{
char i;
int j;
float k;
long int m;
long long int l;

printf("Size of a char: %c byte(s)", sizeof(i));
printf("Size of a int: %d byte(s)", sizeof(j));
printf("Size of a float: %f byte(s)", sizeof(k));
printf("Size of a long int: %d byte(s)", sizeof(m));
printf("Size of a long long int: %d byte(s)", sizeof(l));
return (0);
}
