#include "main.h"

/**
 * swap_int - a function to swap two integers.
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	if (!a || !b)
	{
		return;
	}
	else
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
