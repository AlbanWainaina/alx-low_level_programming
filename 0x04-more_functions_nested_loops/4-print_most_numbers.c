#include "main.h"

/**
 * print_most_numbers - prints all digits apart from 2 and 4
 * Return: no return value
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
