#include "main.h"

/**
 * _isupper - checks for uppercase alphabet
 * @c: char to be tested
 * Return: 0 if c is not uppercase else 1
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
