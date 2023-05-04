#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @n: pointer to string
 * Return: *n
 */
char *rot13(char *n)
{
int u;
int v;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (u = 0; n[u] != '\0'; u++)
{
for (v = 0; v < 52; v++)
{
if (n[u] == data1[v])
{
n[u] = datarot[v];
break;
}
}
}
return (n);
}
