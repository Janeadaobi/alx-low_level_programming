#include <stdio.h>

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
if (lowercase =='e' || lowercase == 'q')
{
lowercase += 1;
}
else
{
putchar(lowercase);
lowercase += 1;
}
}putchar('\n');
return (0);
}
