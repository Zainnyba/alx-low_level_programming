#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0
*/
int main(void)
{
int a, b, c, d, e = 0, f = 0;
for (a = 48; a < 58; a++, e++)
{
b = 48 + e;
for ( ; b < 58; b++)
{
for (c = 48; c < 58; c++, f++)
{
d = 48 + f;
for ( ; d < 58; d++)
{
putchar(a), putchar(b), putchar(32), putchar(c), putchar(d);
if (a != 55 || b != 56 || c != 57 || d != 57)
putchar(44), putchar(32); }}}}
putchar('\n');
return (0);
}
