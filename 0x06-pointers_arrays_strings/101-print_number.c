#include "main.h"
#include <unistd.h>

/**
  * print_number - prints an integer using onlyprintf
  * @n: integer to be printed
  */
void print_number(int n)
{
size_t temp_n = n; /*temp_n = temporary n*/

if (n < 0)
{
_putchar('-');
temp_n = -n;
}

if (temp_n / 10 != 0)
print_number(temp_n / 10);

_putchar((temp_n % 10) + '0');
}
