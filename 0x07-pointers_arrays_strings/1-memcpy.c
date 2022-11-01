#include "main.h"

/**
 * _memcpy - copies from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *v = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (v);
}
