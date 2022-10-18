#include "main.h"

/**
 * print_last_digit - computes and prints last digit
 * @a: number inserted
 * Return: the last digit
 */

int print_last_digit(int a)
{
	int b;

	if (a < 0)
		b = -1 * (a % 10);
	else
		b = a % 10;
	_putchar(b);
	return (b);
}
