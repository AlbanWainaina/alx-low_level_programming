#include "main.h"

/**
 * _abs - computes absolute value
 * @a: number being tested
 * Return: returns the absolute value
 */

int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
