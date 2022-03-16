#include <stdio.h>
/**
*main - print single digit numbers of base 10 using putchar
*Return: zero if correct
*/
int main(void)
{
int n = 0;
int ip = '0';
while (n < 10)
{
putchar(ip);
ip++;
n++;
}
putchar('\n');
return (0);
}
