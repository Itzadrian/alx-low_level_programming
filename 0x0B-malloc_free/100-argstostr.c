#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: argument count
 * @av: pointer to arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *dom;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;

	/* count the number of chars in each string */

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	/**
	 * allocate memory for total number of chars and
	 * new line for each word
	 */

	dom = malloc(sizeof(char) * size);
	if (dom == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			dom[k++] = av[i][j];
		}
		dom[k++] = '\n';
	}
	dom[k] = '\0';
	return (dom);
}
