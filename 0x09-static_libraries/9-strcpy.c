#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: value to be evaluated
 * @src: value to be evaluated
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
