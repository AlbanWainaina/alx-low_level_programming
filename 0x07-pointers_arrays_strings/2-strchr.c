#include "main.h"

/**
 * _strchr - locates character
 * @s: the string
 * @c: character were trying to find
 * Return: pointer to occurence of character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			return (s);
	}
	if (*s == '\0')
		return (NULL);
}
