#include "main.h"

/**
 * _isalpha - checks alphanumeric
 * character
 * @c: int being checked
 * Return: 1 if alphanumeric
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
