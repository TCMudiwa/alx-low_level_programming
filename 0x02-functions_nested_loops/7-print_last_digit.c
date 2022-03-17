#include "main.h"
/**
 * print_last_digit - prints last digit of a number.
 * @n: the number
 *Return: on success 1 on error anything else
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = -n;
}
_putchar(n + '0');
return (n);
}
