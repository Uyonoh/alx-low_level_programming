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

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
		
		if (scr[i] == '\0')
			break;
	}
	return (dest);
}
