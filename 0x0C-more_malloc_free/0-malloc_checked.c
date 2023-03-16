#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: bytes of memory to be allocated
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if (d == NULL)
		exit(98);
	return (d);
}
