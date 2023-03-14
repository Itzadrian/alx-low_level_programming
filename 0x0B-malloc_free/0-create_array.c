#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars with size size
 *
 * @size: size of array
 * @c: char to be assigned
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;

	return (str);
}
