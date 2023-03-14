#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: string to copy
 *
 * Return: NULL or pointer to array
 */

char *_strdup(char *str)
{
	char *dom;
	int a, b;

	if (str == NULL)
		return (NULL);

	a = 0;

	while (str[a] != '\0')
		a++;
	a++;

	dom = malloc(sizeof(*str) * a);
	if (dom == NULL)
		return (NULL);

	b = 0;

	while (str[b] != '\0')
	{
		dom[b] = str[b];
			b++;
	}
	return (dom);
}
