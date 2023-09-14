#include "main.h"

/**
 * main- prints the largest prime factor of a number
 * Return: 0
*/
int main(void)
{
long long num = 612852475143, i, largest_p_factor = -1;

while ((num % 2) == 0)
{
largest_p_factor = 2;
num /= 2; }

for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largest_p_factor = i;
num = num / i; }}

if (num > 2)
largest_p_factor = num;

printf("%lld\n", largest_p_factor);

return (0);
}
