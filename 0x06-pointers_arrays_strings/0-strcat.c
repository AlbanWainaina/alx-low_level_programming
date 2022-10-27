#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended on
 * @src: string thats being appended
 * Return: pointer to new string;
 */

char *_strcat(char *dest, char *src)
{
	char resultant = *dest;
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (resultant);
}
