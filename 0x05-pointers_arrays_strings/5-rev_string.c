#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: target string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len;
	int i;
	char c;

	len = _strlen(s) - 1;
	for (i = 0; i <= (len / 2); i++)
	{
		c = s[i];
		s[i] = s[len - i];
		s[len - i] = c;		
	}
}
