#include "main.h"

/**
 * print_sign - checks for sign of number n
 * @n: number being checked
 * Return: 1 if greater 0 if zero -1 if less
 */

int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		_putchar('+');
		a = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		a = 0;
	}
	else if (n < 1)
	{
		_putchar('-');
		a = -1;
	}
	return (a);
}
