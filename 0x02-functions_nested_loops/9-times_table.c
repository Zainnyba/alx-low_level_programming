#include "main.h"

/**
* times_table - prints the 9 times table
*/
void times_table(void)
{
int digit, mul, res;
for (digit = 0; digit <= 9; digit++)
{
_putchar('0');

for (mul = 1; mul <= 9; mul++)
{
_putchar(',');
_putchar(' ');
res = digit * mul;
if (res <= 9)
_putchar(' ');
else
_putchar((res / 10) + '0');

_putchar((res % 10) + '0');
}
_putchar('\n'); }}
