#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to an array of integers
 * @n: length of the array
*/
void reverse_array(int *a, int n)
{
int temp, s = 0, e = n - 1; /*s = start, e = end, temp = temporary*/

while (s < e)
{
temp = a[s];
a[s] = a[e], a[e] = temp;
s++, e--;
}}
