#include "main.h"

/**
 * _islower - checks if
 * number is lowercase
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	char a;
	int b;

	if (a >= 'a' && a <= 'z')
		b = 1;
	else
		b = 0;
	return (b);
}
