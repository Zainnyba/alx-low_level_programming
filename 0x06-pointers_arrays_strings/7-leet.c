#include "main.h"

/**
 * leet - tencodes a string to 1337
 * @s: argument string
 * Return: pointer to s
 */
char *leet(char *s)
{
int i = 0, j = 0;
char s1[] = "aeotl";
char S1[] = "AEOTL";
char s2[] = "43071";

for ( ; s[i]; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == s1[j] || s[i] == S1[j])
{
s[i] = s2[j];
break;
}}}
return (s);
}
