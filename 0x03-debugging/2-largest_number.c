#include <stdio.h>
/**
 *main - returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: zero if run succesfully
 */
int main(void)
{
int a, b, c;
int largest;
if (a > b && a > c)

largest = a;
printf("largest = %d", a);

if (b > a && b > c)

largest = b;
printf("largest = %d", b);

if (c > b && c > a)

largest = c;
printf("largest = %d", c);
  
 return (0);
}

