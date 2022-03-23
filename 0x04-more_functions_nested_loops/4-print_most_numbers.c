#include "main.h"
/**
 *print_most_numbers - prints numbers one to nine except two and four
 *Return: void
 */
void print_most_numbers(void)
{
int i;
i = 0;
while (i <= 9)
{
  putchar(i);
if (i != 2 && i != 4)
 i++;
_putchar('\n');
}
return;
}
