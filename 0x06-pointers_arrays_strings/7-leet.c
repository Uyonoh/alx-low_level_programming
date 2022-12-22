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
 * _index - get the index of a character in a string disregaurding case
 * @str: string
 * @c: character
 *
 * Return: index of c
 */

int _index(char *str, char c)
{
	int i;

	if (c >= 65 && c <= 90)
		c += 32;

	if (_strin(str, c) || _strin(str, c - 32))
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == c || str[i] == c - 32)
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
	char letters[] = "aeotl";
	int numbers[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (str[i])
	{
		if (_index(letters, str[i]) >= 0)
		{
			index = _index(letters, str[i]);
			str[i] = numbers[index];
		}
		i++;
	}
	return (str);
}
