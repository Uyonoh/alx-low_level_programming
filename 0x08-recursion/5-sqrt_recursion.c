#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - square root of num
 * @n: integer
 *
 * Return - 2 root of n
 */

int check_root(int n, int root)
{
	int diff;

	diff = n - (root * root);
	if (root <= 0)
	{
		return (-1);
	}
	if (diff == 0)
	{
		return (root);
	} else
	{
		printf("--%d\n", root);
		root = (root + diff/root)/2;
		if (root < 0)
		{
			root *= -1;
		}
		return check_root(n, root);
	}
}

int _sqrt_recursion(int n)
{
	if (n == 0 || n ==1)
	{
		return (n);
	}
	return (check_root(n, n/2));
}
