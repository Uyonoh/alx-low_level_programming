#include "main.h"

/**
 * print_alphabet_x10 - prints alps 10 x
 *
 * Return: Always void.
 */


void print_alphabet_x10(void)
{
	int i = 0;
	int a;

	while (i < 10)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
