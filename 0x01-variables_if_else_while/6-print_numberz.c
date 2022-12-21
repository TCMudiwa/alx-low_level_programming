#include <stdio.h>
/**
* main - prints alphabet in lowercase
* Return: 0 if successful
**/
int main(void)
{
int alphabet;
for (alphabet = '0'; alphabet <= '9' ; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
