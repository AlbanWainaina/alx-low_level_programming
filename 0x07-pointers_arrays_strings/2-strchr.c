#include "main.h"

/**
 * _strchr - locates character
 * @s: the string
 * @c: character were trying to find
 * Return: pointer to occurence of character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
