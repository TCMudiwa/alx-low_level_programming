#include "main.h"
#include <stdio.h>
/**
 *_isupper - checks if character is upper case or lower case
 *@c: character being checked
 *Return: 0 if lower case or otherwise and 1 if upper case
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
