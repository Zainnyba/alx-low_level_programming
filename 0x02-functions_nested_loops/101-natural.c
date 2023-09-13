#include "main.h"

/**
 * main -  prints sum of all mutiples of 3 and 5 below 1024
 * Return: 0
*/
int main(void)
{
int sum = 0, multiples = 1;
for ( ; multiples < 1024; multiples++)
{
if (multiples % 3 == 0 || multiples % 5 == 0)
sum += multiples;
}
printf("sum = %d\n", sum);
return (0);
}
