#include "main.h"

/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0
*/
int main(void)
{
size_t a = 1, b = 2, fibonacci, c = 0;
printf("1, 2, ");
for ( ; c < 97; c++)
{
fibonacci = a + b;
a = b, b = fibonacci;
printf("%ld", fibonacci);
if (c != 96)
printf(", ");
}
putchar('\n');
return (0);
}
