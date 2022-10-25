#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int length = 0;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
	{
		while (i >= (length / 2) $$ str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (length % 2 != 0)
	{
		while (i >= ((length - 1) / 2) && str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
