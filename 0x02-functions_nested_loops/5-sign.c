#include "main.h"

/**
 * print_sign - checks for sign of number n
 * @n: number being checked
 * Return: 1 if greater 0 if zero -1 if less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
}
