#include <stdio.h>
/**
*main - print alphabet in lower and upper case
* Return: Always zero if correct
*/
int main(void)
{
char ch = 'a';
int x = 0;
while (x < 26)
{
putchar(ch);
ch++;
x++;
}
ch = 'A';
x = 0;
while (x < 26)
{
putchar(ch);
ch++;
x++;
}
putchar('\n');
return (0);
}
