#include "main.h"


/**
 * jprint_time - printer
 *
 * return 0
 */

void print_time(int h, int m)
{
	if (h < 10)
	{
		_putchar('0');
		_putchar('0' + h);
	} else
	{
		_putchar('0' + (h / 10));
		_putchar('0' + (h % 10));
	}
	_putchar(':');
	if (m < 10)
	{
		_putchar('0');
		_putchar('0' + m);
	} else
	{
		_putchar('0' + (m / 10));
		_putchar('0' + (m % 10));
	}
	_putchar('\n');
}

/**
 * jack-bauer - prints all minutes
 *
 * return 0
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h <= 23)
	{
		print_time(h, m);
		m++;
		if (m == 60)
		{
			m = 0;
			h++;
		}
	}
}


