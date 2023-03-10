#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: argument count
 * @argv: array of pointers to string
 *
 * Return: result of multiplication or 1
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	/* atoi convert a string to an int */

	a = atoi(argv[1]);
	b = atoi (argv[2]);

	result = a * b;
	printf("%d\n", result);

	return (0);
}
