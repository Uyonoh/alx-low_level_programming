# include "main.h"

/**
 * isalpha checks alphabets
 *
 * return none
 */

int _isalpha(int c)
{
	int r;

	if (((c > 97) && (c < 122)) || ((c > 65) && (c < 90)))
	{
		r = 1;
	} else
	{
		r = 0;
	}
	return (r);
}
