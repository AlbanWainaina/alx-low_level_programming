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
	char resultant = *dest;
	int i = 0, j, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++, i++, k++)
	{
		dest[i] = src[j];
	}

	while (src[k] != '\0')
	{
		k++;
	}
	if (k < n)
		dest[i] = '\0';
	return (resultant);
}
