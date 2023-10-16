#include "main.h"

/**
 * rev_string - a function to print a string in reverse.
 *
 * @s: pointer to the string.
 */

void rev_string(char *s)
{
	int i, j, len;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	j = len - 1;
	i = 0;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}

}

