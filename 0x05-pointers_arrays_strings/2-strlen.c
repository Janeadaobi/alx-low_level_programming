#include "main.h"

/**
 * _strlen - calculate and return the lenght string
 * @s: string to be calculate
 * Return: lenght of the string
 */

int _strlen(char *s)
{
int string_lenght = 0;
while (s[string_lenght])
string_lenght++;
return (string_lenght);
}
