#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal
 * @size: number of chars to print
 */
void print_triangle(int size)
{
int space, i;

if (size > 0)
{
for (space = 1; space <= size; space++)
{
for ((i = size - space); i > 0; i--)
_putchar(32);

for (i = 0; i < space; i++)
_putchar(35);

if (space == size)
continue;

_putchar('\n');
}}

_putchar('\n');
}
