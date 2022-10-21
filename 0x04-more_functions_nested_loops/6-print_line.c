#include "main.h"

/**
 * print_line - prints size of line
 * @n: number of lines
 * Return: no return value
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
			_putchar('\n');
		}
		else if (n <= 0)
			_putchar('\n');
	}
}
