/*
 * File: 0-puts_recursion.c
 * Auth: sam
 */

#include "main.h"

/**
 * _puts_recursion - this is a function to print string recuraively
 * @s: string parameter
 */
void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
		_pits_recursion(s + 1);
	}

	else
		_putchar('\n');
}
