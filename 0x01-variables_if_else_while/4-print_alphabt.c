#include <stdio.h>
/**
* main - prints alphabet in lowercase
* Return: 0 if successful
**/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
if (alphabet == 'q')
{
alphabet++;
}
else if (alphabet == 'e')
{
alphabet++;
}
putchar(alphabet);
}
putchar('\n');
return (0);
}
