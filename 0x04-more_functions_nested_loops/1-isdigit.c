#include "main.h"

/**
 * _isdigit - the function to check if no is a digit
 * @c: integer to be checked
 * Return: 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
