#include "main.h"

/**
 * _isdigit - checks for digit from 0 to 9
 *
 * @c: Variable text
 *
 * Return: 1 if is a digit 0 for others
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
