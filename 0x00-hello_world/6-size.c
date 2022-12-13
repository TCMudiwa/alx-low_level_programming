
#include <stdio.h>
/**
* main - prints size of various types
* Return: Always Zero
**/
int main(void)
{
int inttype;
long longtype;
long long longlongtype;
char chartype;
float floattype;
printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
printf("Size of a int:  %zu byte(s)\n", sizeof(inttype));
printf("Size of a long int: %zu byte(s)\n", sizeof(longtype));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongtype));
printf("Size of a float: %zu byte(s)\n", sizeof(floattype);
return (0);
}
