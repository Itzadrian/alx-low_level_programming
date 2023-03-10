#include "main.h"

/**
 * _strlen - returns length of string
 *
 * *@s: pointer to be evaluated
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
