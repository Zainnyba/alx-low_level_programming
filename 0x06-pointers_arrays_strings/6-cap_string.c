#include "main.h"

/**
 * cap_string - capitalize all words of a tring
 * @str: argumet string
 * Return: pointer to the possibly modified tring
*/
char *cap_string(char *str)
{
char unconcerned_chars[] = ",\t;\n; .!?\"(){}";
int flag, i = 0, j = 0;

for (i = 0; str[i] != '\0'; i++)
{
flag = 0;

if (i == 0)
flag = 1;
else
{
for (j = 0; unconcerned_chars[j] != '\0'; j++)
{
if (str[i - 1] == unconcerned_chars[j])
{
flag = 1;
break;
}}}

if (flag == 1)
{
if (str[i] <= 'z' && str[i] >= 'a')
str[i] -= ('a' - 'A');
}}
return (str);
}
