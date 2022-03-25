#include "main.h"
/**
 *print_line - draws a straigh line in terminal
 *Return: zero
 *@n: length of line in underscores
 */
void print_line(int n)
{
int line = 0;
while (line < n)
{
_putchar('_');
line++;
}
_putchar('\n');
return;
}
