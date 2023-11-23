#include "main.h"
#include <stddef.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *endian_check = (char *)&num;

	if (*endian_check == 1)
		return (1);

	return (0);
}
