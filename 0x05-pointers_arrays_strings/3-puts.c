#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
int j = 0;
while (str[j])
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
