#include "main.h"
/**
 *swap_int - swaps two variables using pointers
 *@a: 1st variable
 *@b: 2nd variable
 *Return: void
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

