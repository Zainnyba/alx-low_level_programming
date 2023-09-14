#include "main.h"

/**
 * largest_number - returns/finds the largest of 3 numbers
 * @a: argument 1
 * @b: argument 2
 * @c: argument 3
 * Return: the largest number
 */

int largest_number(int a, int b, int c)
{
int largest_num;

if ((a >= b) && (a >= c))
largest_num = a;

else if ((b >= a) && (b >= c))
largest_num = b;

else if ((c >= b) && (c >= a))
largest_num = c;

return (largest_num);
}
