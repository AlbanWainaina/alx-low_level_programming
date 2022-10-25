#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
