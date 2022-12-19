#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - print every other char
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int len;

	len = _strlen(str) - 1;

	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
