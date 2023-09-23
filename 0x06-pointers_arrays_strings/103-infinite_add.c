#include "main.h"
/**
 * _reverse - reverses an array
 * @n: pointer to argument integer
 */
void _reverse(char *n)
{
int i = 0, j = 0;
char c; /*temporary variable*/

while (*(n + i) != '\0')
i++;

i--;

for (j = 0; j < i; j++, i--)
{
c = n[j];
n[j] = n[i];
n[i] = c;
}}

/**
 * infinite_add - adds two numbers
 * @n1: enstringed operand (first)
 * @n2: enstringed operand (second)
 * @r: pointer to buffer
 * @size_r: size or @r
 * Return: pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int bits = 0, i = 0, j = 0, dig = 0; /*bits = overflown numbers, dig = digits*/
int crr = 0, crr1 = 0, temp = 0;

while (n1[i])
i++;
while (n2[j])
j++;

i--, j--;
if (j >= size_r || i >= size_r)
return (0);

while (j >= 0 || i >= 0 || bits == 1)
{
if (i < 0)
crr = 0;
else
crr = n1[i] -'0';
if (j < 0)
crr1 = 0;
else
crr1 = n2[j] -'0';
temp = crr + crr1 + bits;
if (temp >= 10)
bits = 1;
else
bits = 0;
if (dig >= (size_r - 1))
return (0);
r[dig] = (temp % 10) + '0';
dig++, j--, i--;
}

if (dig == size_r)
return (0);
r[dig] = '\0';
_reverse(r);
return (r);
}
