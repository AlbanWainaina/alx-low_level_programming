#include "main.h"

/**
 * _memset - fills first n bytes with character b
 * @s: memory location to be added
 * @b: character to add
 * @n: bytes to be added
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *v = s;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (v);
}
