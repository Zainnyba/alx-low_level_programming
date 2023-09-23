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
	}
}

/**
 * _strlen - measures the length of a string
 * @s: pointer to a string
 * Return: length of s
 */
int _strlen(char *s)
{
int len = 0;

while (s[len])
len++;
return (len);
}

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
int i = _strlen(n1) - 1, j = _strlen(n2) - 1;
int carry = 0, sum, r_index = 0, num1, num2;

if (i >= size_r || j >= size_r)
return (0);

while (i >= 0 || j >= 0 || carry)
{
num1 = (i >= 0) ? n1[i] - '0' : 0;
num2 = (j >= 0) ? n2[j] - '0' : 0;

sum = num1 + num2 + carry;
carry = sum / 10;
r[r_index++] = (sum % 10) + '0';

if (r_index == size_r)
return (0);

i--, j--;
}

r[r_index] = '\0';
_reverse(r);
return (r);
}
