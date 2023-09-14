#include "main.h"

/**
 * print_line - draws a staright line in the terminal
 * @n: detrmines lenggth of the line
 */
void print_line(int n)
{
int i = 0;

if (n <= 0)
{
_putchar('\n');
return;
}

for ( ; i < n; i++)
_putchar(95);

_putchar('\n');
}
