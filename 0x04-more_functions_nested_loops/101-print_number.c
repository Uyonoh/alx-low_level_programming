#include <stdio.h>
#include <math.h>
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

/**
  * print_number -  Gets and Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Always 0
  */
int get_int( int n)
{
	int k = n;
	int j;
	int i;
	int x;
	int z;

	if (n < 0)
	{
		_putchar('-');
		k = -n;
		n = -n;
	}

	if ((n < 10) && (n >= 0))
	{
		_putchar('0' + n);
		return (0);
	}
	
	i = 0;
	while (k >= 10)
	{
		k /= 10;
		i++;
	}
	_putchar('0' + k);
	
	if (i == 1)
	{
		_putchar('0' + (n % 10));
		return (0);
	}
	x = pow(10, i);
	j = k * x;
	j = n - j;

	z = ilen(n) - ilen(j);

	while (z > 1)
	{
		_putchar('0');
		z--;
	}
	

	get_int(j);
	return (0);
}

/**
 * ilen - gets the length of an integer
 * @n: integer to be checked
 *
 * Return: length of integer
  */

int ilen(int n)
{
	int i;

	i = 0;

	if (n == 0)
		i = 1;

	while (n > 0)
	{
		n /= 10;
		i ++;
	}
	return i;
}
