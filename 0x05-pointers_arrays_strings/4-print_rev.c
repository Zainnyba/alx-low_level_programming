#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: reverse string
*/
void print_rev(char *s)
{
int i = 0;
char *err_msg = "(null)";

if (s == NULL)
{
while (err_msg[i])
write(2, &err_msg[i], 1), i++;
_putchar(10);
return;
}
i = 0;
while (s[i])
i++;
for (i -= 1; i >= 0; i--)
_putchar(s[i]);
_putchar(10);
}
