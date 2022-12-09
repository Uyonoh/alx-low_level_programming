#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	puts("Size of a char: %lu byte(s)", (unsigned long)(sizeof(c)));
	puts("Size of an int: %lu byte(s)", (unsigned long)(sizeof(c)));
	puts("Size of a long int: %lu byte(s)", (unsigned long)(sizeof(c)));
	puts("Size of a long long int: %lu byte(s)", (unsigned long)(sizeof(lli)));
	puts("Size of a float: %lu byte(S)", (unsigned long)(sizeof(f)));

	return (0);
}

