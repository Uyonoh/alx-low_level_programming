#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: string
 *
 * Return: pointer to str
 */

char *leet(char *str)
{
	int i;
	int j;
	char letters[] = "aeotl";
	int numbers[] = {'4', '3', '0', '7', '1'};

	i = 0;

	while (str[i])
	{
		for (j = 0; j <= 4; j++)
		{
			if ((str[i] == letters[j]) || (str[i] + 32 == letters[j]))
			{
				str[i] = numbers[j];
			}
		}
		i++;
	}

	return (str);
}
