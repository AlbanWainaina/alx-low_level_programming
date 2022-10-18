#include "main.h"

/**
 * _islower - checks if
 * c is lowercase
 * @c: integer being checked
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	int b;

	if (c >= 'a' && c <= 'z')
		b = 1;
	else
		b = 0;
	return (b);
}
