#include "stdio.h"

/**
 * add - Adds two integers and returns
 * the result.
 *
 * @a: number one.
 * @b: number two.
 *
 * Return: Add of number one and number two.
 */
void print_to_98(int n)
{

	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
