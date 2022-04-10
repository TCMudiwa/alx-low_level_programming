#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: the string being measured
 *Return: 0 if successful
 */
int _strlen(char *s)
{

int i = 0;
while (s[i] != '\0')
{
++i;
}
return (i);
}

