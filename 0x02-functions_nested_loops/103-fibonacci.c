#include "main.h"

/**
 * main - prints the first 59 fibonacci numbers
 * Return: 0
*/
int main(void)
{
size_t a = 1, b = 2, fibonacci;
printf("1, 2, ");
while (fibonacci < 4000000)
{
fibonacci = a + b;
a = b, b = fibonacci;
if ((fibonacci % 2) == 0)
printf("%ld", fibonacci);
if (b != 47)
printf(", ");
}
putchar('\n');
return (0);
}
