#include <stdio.h>
/**
*main - print alphabet backwards using putchar
* Return: 0 if coorect
*/
int main(void)
{
char low;
for (low = 'z'; low >= 'a'; low--)
{
putchar(low);
}
putchar('\n');
return (0);
}
