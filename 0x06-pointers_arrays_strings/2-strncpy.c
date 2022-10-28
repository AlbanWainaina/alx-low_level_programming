#include "main.h"

/**
 * _strncpy - copies string to destination
 * @dest: destination
 * @src: source
 * @n: number of characters to be copied
 * Return: pointer to the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
