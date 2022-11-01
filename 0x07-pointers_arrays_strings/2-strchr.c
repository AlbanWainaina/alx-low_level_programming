#include "main.h"

/**
 * _strchr - locates character
 * @s: the string
 * @c: character were trying to find
 * Return: pointer to occurence of character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != c; i++, s++)
		;
	s++;
	return (s);
}
