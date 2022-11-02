#include "main.h"

/**
 * _memcpy.c - this fuct copies a mem address
 * @dest: first param
 * @src: second param
 * @n: Third param
 * Return: returns a string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
