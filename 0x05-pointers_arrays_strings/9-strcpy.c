#include "main.h"

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
	while (i >= 0)
	{
		if (src == "")
		{
			dest = "";
			break;
		}
		
		dest[i] = src[i];
		i++;

		if (src[i] == '\0')
			break;
	}
	return (dest);
}
