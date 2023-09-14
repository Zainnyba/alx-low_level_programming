#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
*/
void more_numbers(void)
{
int a = 0, b = 0;
for ( ; a < 10; a++, b = 0)
{
for ( ; b < 15; b++)
{
if  (b > 9)
_putchar((b / 10) + 48);
_putchar((b % 10) + 48);
}
_putchar('\n'); }}
