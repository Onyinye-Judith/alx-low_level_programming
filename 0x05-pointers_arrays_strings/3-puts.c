#include "main.h"

/**
 * _puts - a function to print a string followed
 * by a new line to stdout.
 * @str: the string to be printed.
 */

void _puts(char *str)
{
	int i;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}




