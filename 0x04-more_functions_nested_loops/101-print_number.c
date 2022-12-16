#include "main.h"

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int n)
{
	get_int(n);
}

int get_int(int n)
{
	int k = n;
	int j;
	int i;

	if (n < 10)
	{
		_putchar('0' + n);
		return (0);
	}

	while (k >= 10)
	{
		k /= 10;
		i++;
	}
	_putchar('0' + k);
	if (i == 1)
	{
		_putchar('0' + (k % 10));
		return (0);
	}

	j = k * (10 ^ i);
	j = n - j;

	get_int(j);
	return (0);
}
