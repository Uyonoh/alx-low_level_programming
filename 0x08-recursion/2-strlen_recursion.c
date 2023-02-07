#include "main.h"

/**
 * _strlen_recursion - print len of string
 * @s: string
 *
 * Return - len of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return(_strlen_recursion(s + 1) + 1);
	}
	else
		return(0);
}

