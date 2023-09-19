#include "main.h"

/**
 * _strlen - measures the length of a string
 * @s: pointer to a string
 * Return: length of s
*/
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}
