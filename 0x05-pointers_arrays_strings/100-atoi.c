#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i;
	int n;
	int *p;
	int si;

	i = 0;
	n = 0;
	si = 1;
	p = &n;
	while (s[i])
	{
		if ((s[i] >= 48) && (s[i] <= 57))
		{
			_format(p, s[i] - 48);
		} else if (s[i] == '-')
		{
			si *= -1;
		}

		if (( n != 0) && !((s[i] >= 48) && (s[i] <= 57)))
		{
			return (n * si);
		}
		i++;
	}
	return (0);
}

void _format(int *p, int d)
{
	int n;

	n = *p * 10;
	n += d;
	*p = n;
}
