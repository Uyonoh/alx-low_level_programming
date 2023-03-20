#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: copy to
 * @src: copy from
 * @n: copy up to
 *
 * Return: poointer to desc
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while ((src[i]) && (i < n))
	{
		dest[i] = src[i];
		i++;
	}

	if (!(src[i]))
	{
		dest[i] = '\0';
	}
	return (dest);
}
