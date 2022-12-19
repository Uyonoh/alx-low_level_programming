#include "main.h"

/**
 * _puts - print a string to stdout.
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		} else
		{
			break;
		}
	}
	_putchar('\n');
}

