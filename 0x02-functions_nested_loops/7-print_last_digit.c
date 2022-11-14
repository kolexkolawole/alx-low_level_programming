#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @b: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int b)
{
	int l;

	l = b % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
