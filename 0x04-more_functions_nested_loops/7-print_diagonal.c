#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: determines length of the line
*/
void print_diagonal(int n)
{
int i, spc = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
else
{
for (i = 0; i < n; i++)
{
for (spc = 0; spc < i; spc++)
_putchar(32);
_putchar(92);
_putchar('\n'); }}}
