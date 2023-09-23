/**
 * _strncpy - copies a string to a specifed buffer.
 * @dest: pointer to destination buffer
 * @src: source string
 * @n: number of bytes to be copied from src
 * Return: pointer to the dest buffer
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

for (i = 0; i < n && src[i]; i++)
dest[i] = src[i];

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
