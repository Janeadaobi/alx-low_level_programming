#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @a: input value
 * Return: a value
 */
char *leet(char *a)
{
int d, f;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (d = 0; a[d] != '\0'; d++)
{
for (f = 0; f < 10; f++)
{
if (a[d] == s1[f])
{
a[d] = s2[f];
}
}
}
return (a);
}
