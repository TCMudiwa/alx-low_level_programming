#include "main.h"
/**
 *more_numbers - prints the numbers 0 to 14 10 times followed by a new line
 *Return: void
 */
void more_numbers(void)
{
int j, i = 0;
while (i < 10)
{
j = 0;
while (j <= 14)
{
printf("%d", j);
j++;
}
printf("\n");
i++;
}
 _putchar('\n');
return;
}
