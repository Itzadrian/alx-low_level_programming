#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with constant byte
 *
 * @s: memory area to be filled
 * @b: char to be copied
 * @n: times to copy b
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of array elements
 * @size: size of array elements
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dom;

	if (nmemb == 0 || size == 0)
		return (NULL);
	dom = malloc(size * nmemb);

	if (dom == NULL)
		return (NULL);
	_memset(dom, 0, nmemb * size);

	return (dom);
}
