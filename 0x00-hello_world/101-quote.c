#include <stdio.h>
#include <unistdio.h>
/**
 * main - a C program that prints lines to the standard error
 * Return:0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19));
	return(1);
}
