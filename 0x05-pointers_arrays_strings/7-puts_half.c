#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints second half of a string
 * @str: target string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int len;

	len = _strlen(str);
	if (len % 2 != 0)
	{
		n = (len -1) / 2;
	} else
	{
		n = len / 2;
	}
	n += 1;
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
