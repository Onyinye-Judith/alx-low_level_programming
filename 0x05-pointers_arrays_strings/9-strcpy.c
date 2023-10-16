#include "main.h"

/**
 * *_strcpy - replicates a string
 * @dest: pointer to the buffer
 * @src: string to be copied
 *
 * Return: return new pointer
 */

char *_strcpy(char *dest, char *src)
{
	int siz, i;

	siz = 0;

	while (src[siz] != '\0')
	{
		siz++;
	}

	for (i = 0; i < siz; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
