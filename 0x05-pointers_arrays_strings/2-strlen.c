#include "main.h"

/**
 * _strlen - finds length of a string
 * @s: string to be measured
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
