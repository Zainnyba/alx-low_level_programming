
#include "main.h"

/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0
*/
int main(void)
{
size_t a = 1, b = 2, fib, a = 0;
printf("1, 2, ");
for ( ; a < 48; a++)
{
fib = a + b;
a = b, b = fib;
printf("%ld", fib);
if (a != 47)
printf(", ");
}
putchar('\n');
return (0);
}
