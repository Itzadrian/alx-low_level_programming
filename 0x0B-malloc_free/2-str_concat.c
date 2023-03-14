#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *dom;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	dom = malloc(sizeof(char) * (i + j + 1));

	if (dom == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		dom[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dom[i] = s2[j];
		i++, j++;
	}
	dom[i] = '\0';
	return (dom);
}
