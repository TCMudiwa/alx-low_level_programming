#include <stdio.h>
/**
 *main- print alphabet
 *Return: Always zero if correct
 */
int main(void)
{
char ch = 'a';
int x = 0;
while (x <= 26)
{
putchar(ch);
ch++;
x++;
}
putchar('\n');
return (0);
}
