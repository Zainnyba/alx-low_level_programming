#include "main.h"

/**
* string_toupper - converts all lowercase letters of a string to uppercase
* @x: argument sring
* Return: pointer to the possibly modifid string x
*/
char *string_toupper(char *x)
{
int i = 0;

while (x[i])
{
if (x[i] >= 97 && x[i] <= 122)
x[i] -= 32;
i++;
}
return (x);
}
