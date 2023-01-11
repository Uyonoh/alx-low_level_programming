#include "main.h"

/**
 * _strlen - get length of srting
 * @s: string
 *
 * Return: len of s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (s[i] != '\0')
		{
			i++;
		} else
		{
			break;
		}
	}
	return (i);
}
