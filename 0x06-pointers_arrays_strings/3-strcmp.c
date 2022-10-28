#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first sting
 * @s2: second string
 * Return: ASCII difference between the two
 */

int _strcmp(char *s1, char *s2)
{
	int i, comparison;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			comparison = s1[i] - s2[i];
			break;
		}
		else
			comparison = 0;
	}
	return (comparison);
}
