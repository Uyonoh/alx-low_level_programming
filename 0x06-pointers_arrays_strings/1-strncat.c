#include "main.h"
#include "_strlen.c"

/**
 * _strncat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 * @n: most no of bytes to use from src
 *
 * Return: pointer to desc
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = _strlen(dest);
	j = 0;

	while((src[j]) && (j < n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	if (j >= n)
	{
		dest[i] = '\0';
	}
	return (dest);
}

