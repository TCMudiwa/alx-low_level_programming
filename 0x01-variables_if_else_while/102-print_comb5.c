#include <stdio.h>
/**
* main - prints all unique combos of 2 digit numbers
* Return: 0 if successful
**/
int main(void)
{
int alphabet, j;
for (alphabet = 0 ; alphabet <= 99; alphabet++)
{
for (j =  0  ; j <= 99  ; j++)
{
if (alphabet < j)
{
putchar((alphabet / 10) + '0');
putchar((alphabet % 10) + 0);
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (alphabet != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
