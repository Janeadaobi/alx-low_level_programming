#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
int i, k;
for (i = 1; 1 <= 10; i++)
{
for (k = 0; k <= 14; k++)
{
if (k >= 10)
_putchar(1);
_putchar(k % 10 + '0');
}
_putchar('\n');
}
}
