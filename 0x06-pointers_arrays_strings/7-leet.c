#include "main.h"

/**
 * _strin - checks if a character is in a string
 * @str: string
 * @c: character
 *
 * Return: 1 or 0
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

/**
 * _index - get the index of a character in a string
 * @str: string
 * @c: character
 *
 * Return: index of c
 */

int _index(char *str, char c)
{
	int i;

	if (_strin(str, c))
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == c)
			{
				break;
			}
			i++;
		}
	} else
	{
		i = -1;
	}
	return (i);
}

/**
 * leet - encode a string into 1337
 * @str: string
 *
 * Return: pointer to str
 */

char *leet(char *str)
{
	int i;
	int index;
	char letters[] = "aeotlAEOTL";
	int numbers[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (str[i])
	{
		if (_strin(letters, str[i]))
		{
			index = _index(letters, str[i]);

			if (index >= 5)
			{
				index -= 5;
			}
			str[i] = numbers[index];
		}
		i++;
	}
	return (str);
}
