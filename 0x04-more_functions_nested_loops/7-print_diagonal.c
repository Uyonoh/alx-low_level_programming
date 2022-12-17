#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: langht of line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
