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
while (x < 26)
{
putchar(ch);
putchar(CH);
ch++;
CH++;
x++;
}
putchar('\n');
return (0);
}
