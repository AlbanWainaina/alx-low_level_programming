#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: maximum bytes from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *resultant = dest;
	int j;

	while (*dest != '\0')
	{
		dest++;
	}

	for (j = 0; j < n; j++)
	{
		*dest = *src;
	}

	while (*src != '\0')
	{
		src++;
	}
	if (k < n)
		dest[i] = '\0';
	return (resultant);
}
