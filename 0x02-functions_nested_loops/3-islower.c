#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: a character
 * Return: 1 if c is lowercase otherwise 0
*/
int _islower(int c)
{
if (c < 123 && c > 96)
return (1);
return (0);
}
