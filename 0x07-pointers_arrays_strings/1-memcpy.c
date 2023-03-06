#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @src: source of copied memory
 * @dest: destination of copied memory
 * @n: number of bytes copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
