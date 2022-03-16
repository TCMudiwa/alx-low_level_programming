#include <stdio.h>
/**
*main - prints all numbers of base 16 in lower case using putchar
* Return: zero if all is well
*/
int main(void)
{
int n = 48;
char ch = 'a';
while (n < 58)
{
putchar(n);
n++;
}
n = 0;
while (n < 6)
{
putchar(ch);
ch++;
n++;
}
putchar('\n');
return (0);
}
