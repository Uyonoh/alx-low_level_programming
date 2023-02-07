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

	diff = (root * root) / n;
	if (root <= 0 || (root * root) < n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	} else
	{
		root -= diff;
		return (check_root(n, root));
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
