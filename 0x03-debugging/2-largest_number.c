#include <stdio.h>
/**
 *largest_number - returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: zero if run succesfully
 */
int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)

largest = a;
printf("%d is the largest number", a);

if (b >= a && b >= c)

largest = b;
printf("largest = %d", b);

if (c >= a && c >= b)

printf("largest = %d", c);
largest = c;


return (largest);
}
