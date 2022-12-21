#include <stdio.h>
/**
* main - prints alphabet in lowercase
* Return: 0 if successful
**/
int main(void)
{
int alphabet;
for (alphabet = 48; alphabet < 58; alphabet++)
{
putchar(alphabet);
if (alphabet < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
