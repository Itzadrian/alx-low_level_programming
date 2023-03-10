#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 *
 * @argc: number of arguments
 *
 * Return: Always 0(succes)
 */

int main(int argc, char *argv[])
{
	/* To suppress unused variable warning */

	argv = argv;

	printf("%d\n", argc - 1);

	return (0);
}
