#include "main.h"

/**
 * print_rev - prints a string,
 * followed by a new line, to stdout
 * @s: reference pointer to string
 * Return: 0
 */

void print_rev(char *s)
{
int start = 0;
while (s[start])
start++;
while (start--)
_putchar(s[start]);
_putchar('\n');
}
