#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - print a string in reverse
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	for (len = _strlen(s) - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
