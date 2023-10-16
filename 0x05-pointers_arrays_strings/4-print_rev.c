#include "main.h"

/**
 * print_rev - a function to print a string in reverse.
 * @s: pointer to the string.
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		s++;
	}
	i++;
	for (j = i; j != 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

