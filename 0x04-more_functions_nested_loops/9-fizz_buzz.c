#include <stdio.h>
#include "main.h"
/**
 *main - prints numbers 0 to 100 if multiple of 3 fizz of 5 buzz of
 *both fizzbuzz
 *Return: zero
 */
int main(void)
{
int i;
i = 1;
while (i <= 100 && !0)
{
if (i % 3 == 0 && i % 5 == 0 && i != 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0 && i == 100)
{
printf("Buzz");
}
else if (i % 5 == 0 && i != 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i != 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
i++;
}
printf("\n");
return (0);
}
