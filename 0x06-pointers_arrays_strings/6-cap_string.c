#include "main.h"

/**
 * cap_string - capitalize all words in string
 * @str: string
 *
 * Return: pointer to str
 */

int _strin(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
		{
			return (1);
		}
	i++;
	}
	return (0);
}

char *cap_string(char *str)
{
	int i;
	char seperators[] = ", ; . ! ? \" ( ) { } \n \t";

	i = 0;

	while ( str[i])
	{
		if (_strin(seperators, str[i]))
		{
			if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
