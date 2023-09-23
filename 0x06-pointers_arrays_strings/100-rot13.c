#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: argument string
 * Return: pointer to s
 */
char *rot13(char *s)
{
int count = 0, i = 0;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (s[count])
{
for ( ; i < 52; i++)
{
if (s[count] == alphabet[i])
{
s[count] = rot13[i];
break;
}}
count++;
}

return (s);
}
