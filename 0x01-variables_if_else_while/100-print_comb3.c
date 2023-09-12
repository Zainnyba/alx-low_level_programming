#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * Return: 0
*/
int main(void)
{
int a = 48, b = 49, c = 0;
for ( ; a < 58; a++, c++)
{
b = 49 + c;
for ( ; b < 58; b++)
{
putchar(a), putchar(b);
if (a != 56 || b != 57)
putchar(44), putchar(32);
}
}
putchar('\n');
return (0);
}
