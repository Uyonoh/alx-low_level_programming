# include "main.h"

/**
 * _abs - print absolute val
 *
 * Return: Always int.
 */

int _abs(int n)
{
	int r;

	if (n >= 0)
	{
		r = n;
	} else
	{
		r = n * -1;
	}
	return (r);
}
