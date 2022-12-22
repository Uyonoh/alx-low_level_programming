#include "main.h"
#include "_strlen.c"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: difference in deffering char
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int n;
	int l;

	l = _strlen(s1);
	if(_strlen(s2) > l)
		l = _strlen(s2);

	for (i = 0; i < l; i++)
	{
		n = s1[i] - s2[i];

		if (n != 0)
			break;
	}
	return (n);
}

