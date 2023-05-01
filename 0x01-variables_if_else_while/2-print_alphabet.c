#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase += 1;
}
putchar('\n');
return (0);
}
