#include "main.h"

/**
 * main - nothing much, just fizzing and buzzing
 * Return: 0
 */
int main(void)
{
int i = 1;

for ( ; i < 101; i++)
{
if ((i % 3 == 0) && (i % 5 != 0))
printf("Fizz ");
else if ((i % 5 == 0) && (i % 3 != 0))
printf("Buzz ");
else if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz ");
else
printf("%d ", i);
}
putchar('\n');
return (0);
}
