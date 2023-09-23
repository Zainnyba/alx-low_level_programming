#include "main.h"


/**
 * _strncat - concatenated two string
 * @dest: pointer to destination buffer
 * @src: pointer to the source string
 * @n: number of bytes to of the source string to concatenate with dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, len = 0;

while (dest[len])
len++;

for ( ; i < n && src[i]; i++)
dest[len + i] = src[i];

dest[len + i] = '\0';
return (dest);
}
