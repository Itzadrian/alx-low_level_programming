#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: starting address of memory to be filled
 * @n: number of bytes to be filled
 * @b: constant byte
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
