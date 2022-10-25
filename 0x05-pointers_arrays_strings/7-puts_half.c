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
	while (length % 2 == 0)
	{
		if (i >= (length / 2))
		{
			while (str[i] != '\0')
			{
				_putchar(str[i]);
				i++;
			}
		}
		else
			i++;

	}
	while (length % 2 != 0)
	{
		if (i >= ((length - 1) / 2))
		{
			while (str[i] != '\0')
			{
			_putchar(str[i]);
			i++;
			}
		}
		else
			i++;
	}
	_putchar('\n');
}
