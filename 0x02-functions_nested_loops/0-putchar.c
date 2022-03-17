#include "main.h"
/**
*main - print putchar
*Return: Zero if correct
*/
int main(void)
{
char chaine[] = "_putchar";
int i = 0;
while (chaine[i] != '\0')
{
_putchar(chaine[i]);
i++;
}
return (0);
}
