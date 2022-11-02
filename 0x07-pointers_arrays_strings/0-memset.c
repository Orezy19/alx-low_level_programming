#include "main.h"

/**
 * _memset - This function sets a memory address
 * @s: string character
 * @b: character param
 * @n: integer param
 * Return: returns a string
 */
void *_memset(void *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
