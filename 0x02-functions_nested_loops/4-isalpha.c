#include "main.h"
/**
 *_isalpha - checks if character is an alphabetic letter
 *@c: is the character that is checked
 *Return: 1 if c is a letetr returns 0 if otherwise
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
