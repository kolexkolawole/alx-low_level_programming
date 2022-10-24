#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		_putchar(-ld + '0');
			return (-1);
	}
	else
	{

		_putchar(ld + '0');
			return (1);
	}
}
