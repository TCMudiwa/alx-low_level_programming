#include "main.h"
/**
* _isalpha - function checks if a char is cap letter
* @c: char to be checked
* Return: 1 if c is cap or 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 65) && (c <= 90))
return (1);
else if ((c >= 97) && (c <= 122))
return (1);
else
return (0);
}
