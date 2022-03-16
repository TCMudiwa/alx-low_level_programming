#include <stdio.h>
/**
* main - print all combinations of single digit numbers
* Return: zero if correct
*/
int main(void)
{
int A = 48;
while (A <= 57)
{
putchar(A);
if (A != 57)
{
putchar(',');
putchar(' ');
}
A++;
}
putchar('\n');
return (0);
}
