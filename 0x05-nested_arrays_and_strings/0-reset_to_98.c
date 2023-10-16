#include "main.h"

/**
 * reset_to_98 - a function that updates a value of a
 * pointer to 98
 * @n: pointer to the memory location of the value.
 */

void reset_to_98(int *n)
{
	if (!n)
	{
		return;
	}
	else
	{
		*n = 98;
	}
}

