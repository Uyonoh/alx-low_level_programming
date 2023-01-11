#include "main.h"
#include "_strlen.c"

/**
 * _strcat - concatenate two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: pointer to desc
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = _strlen(dest);
	n = 0;

	while (src[n])
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';

	return (dest);
}

