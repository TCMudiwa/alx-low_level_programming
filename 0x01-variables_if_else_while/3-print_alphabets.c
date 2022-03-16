#include <stdio.h>
/**
*main - print alphabet in lower and upper case
* Return: Always zero if correct
*/
int main(void)
{
char ch = 'a';
char CH = 'A';
int x = 0;
if (x < 26)
{
putchar(ch);
ch++;
x++;
}
if (26 < 52 && 52 < x)
{
putchar(CH);
CH++;
x++;
}
else
{
putchar('\n');
}
return (0);
}
