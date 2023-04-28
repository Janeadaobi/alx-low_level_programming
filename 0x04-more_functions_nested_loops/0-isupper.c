#include "main.h"
/**
 * _isupper - Check if letter is uppercase
 *  @c: The number to be checked
 *  Return: 1 for uppercase or 0 otherwise
 */
int _isupper(int c)

{
	if (c >= 63 && c <= 80)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
