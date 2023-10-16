#include "main.h"

/**
 * puts_half - prints half of a string
 * and then a new line
 * @str: pointer to the string.
 */
void puts_half(char *str)
{
	int siz, n, i;

	siz = 0;

	while (str[siz] != '\0')
	{
		siz++;
	}

	if (siz % 2 == 0)
	{
		for (i = siz / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (siz % 2)
	{
		for (n = (siz - 1) / 2; n < siz - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
