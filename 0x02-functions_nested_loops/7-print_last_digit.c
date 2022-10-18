#include "main.h"

/**
 * print_last_digit - computes and prints last digit
 * @a: number inserted
 * Rerurn: the last digit
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	_putchar(b);
	return (b);
}
