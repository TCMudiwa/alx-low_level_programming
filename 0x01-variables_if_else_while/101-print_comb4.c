#include <stdio.h>
/**
* main - prints alphabet in lowercase
* Return: 0 if successful
**/
int main(void)
{
int alphabet, j, k;
for (alphabet = '0'; alphabet <= '9'; alphabet++)
{
for (j = '0' ; j <= '9' ; j++)
{
for (k = '0'; k <= '9'; k++)
{
if ((alphabet < j) & (j < k) & (k <= '9'))
{
putchar(alphabet);
putchar(j);
putchar(k);
if ((alphabet + j + k) < 168)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
