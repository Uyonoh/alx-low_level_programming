#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copy a string to buffer
 * @dest: buffer/destination
 * @src: string
 *
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (_strlen(src) < 1)
	{
		dest = "";
		return (dest);
	}

	i = 0;
	while (i >= 0)
	{
		dest[i] = src[i];
		i++;

		if (src[i] == '\0')
		{
			break;
		}
	}
	return (dest);
}
