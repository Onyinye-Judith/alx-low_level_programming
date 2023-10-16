#include "main.h"

/**
 * puts2 - a function to print every other character of a line
 * starting with the first one and a new line next
 * @str: the string to be printed.
 */

void puts2(char *str)
{
	int i, siz;

	siz = 0;

	while (str[siz] != '\0')
	{
		siz++;
	}

	for (i = 0; i < siz; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

