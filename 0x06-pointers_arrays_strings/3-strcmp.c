#include "main.h"

/**
 * _strcmp -compares two strings
 * @s1: argument 1
 * @s2: argument 2
 * Return: .
 */
int _strcmp(char *s1, char *s2)
{
int i, typecasted_S1, typecsted_S2;

for (i = 0; ; i++)
{
typecasted_S1 = (int) s1[i];
typecsted_S2 = (int) s2[i];

if (s1[i] == '\0' && s2[i] == '\0')
return (0);

if (typecasted_S1 > typecsted_S2)
return (typecasted_S1 - typecsted_S2);

if (typecasted_S1 < typecsted_S2)
return (typecasted_S1 - typecsted_S2);

}}
