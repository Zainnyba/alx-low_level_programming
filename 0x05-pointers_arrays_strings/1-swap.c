#include "main.h"

/**
 * swap_int - swaps the vlue of two confused integers
 * @a: first number
 * @b: the second argument
*/
void swap_int(int *a, int *b)
{
*a ^= *b, *b ^= *a, *a ^= *b;
}
