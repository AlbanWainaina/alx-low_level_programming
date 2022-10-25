#include "main.h"

/**
 * rev_string - function to reverse string
 * @s: input string
 * Return: nothing
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	while (i < length--)
	{
		temp = s[i];
		s[i++] = s[length];
		s[length] = temp;
	}
}
