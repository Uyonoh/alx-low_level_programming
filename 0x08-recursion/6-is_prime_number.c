#include "main.h"

int is_divisible(int n, int div)
{
	if ((n % div) == 0)
	{
		return (0);
	}
	if (div > 2)
	{
		return (is_divisible(n, div -1));
	}
	return(1);
}



/**
 * is_prime_number - checks prime
 * @n: number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1)
	{
		return(0);
	}
	return (is_divisible(n, 9));
}
