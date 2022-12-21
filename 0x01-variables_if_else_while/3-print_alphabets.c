#include <stdio.h>
/**
* main - prints alphabet in lowercase
* Return: 0 if successful
**/
int main(void)
{
char alphabet;
char ALPHA;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
    putchar(alphabet);
}
for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA   ++)
{
putchar(ALPHA);
}
putchar('\n');
return (0);
}
