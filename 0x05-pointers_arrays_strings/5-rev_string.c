#include "main.h"

/**
 * rev_string - reverses a string
 *
 * *@s: pointer working with
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}

	i = len - 1;

	for (; e < ((i / 2) + 1); e++)
	{
		x = (i - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
