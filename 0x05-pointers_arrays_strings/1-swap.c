#include "main.h"

/**
 * swap_int - swap values of two integers
 *
 * *@a: pointer to evaluate
 * *@b: pointer to evaluate
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
