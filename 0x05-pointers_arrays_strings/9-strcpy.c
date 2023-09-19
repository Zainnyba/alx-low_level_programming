#include "main.h"

/**
 * _strcpy - copies a string from src stringto dest's buffer
 * @dest: destina buffer
 * @src: source string
 * Return: pointer to dest busffer
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

for ( ; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
