#include "main.h"

/**
 * swap_int - swaps two integer variables
 * @a: swaps and then store the address of b
 * @b: swaps and then store the address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int replace;
replace = *a;
*a = *b;
*b = replace;
}
