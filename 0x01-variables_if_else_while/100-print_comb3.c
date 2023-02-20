#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int twos;
	int ones;

	for (twos = 0; twos <= 9; twos++)
	{
	for (ones = twos + 1; ones <= 9; ones++)
	{
	putchar(twos + '0');
	putchar(ones + '0');

	if (twos < 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

return (0);
}
