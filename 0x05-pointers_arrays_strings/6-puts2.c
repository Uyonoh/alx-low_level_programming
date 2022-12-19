#include "main.h"

/**
 * puts2 - print every other char
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i >=0; i += 2)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		} else
		{
			break;
		}
	}
	_putchar('\n');
}
