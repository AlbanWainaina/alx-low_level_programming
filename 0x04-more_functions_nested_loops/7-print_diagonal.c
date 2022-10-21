#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of times character should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n != 0)
		{
			for (j = 1; j <= n; j++)
			{
				if (i != j)
					_putchar(' ');
				else if (i == j)
					_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
