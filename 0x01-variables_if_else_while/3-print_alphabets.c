#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int u;
	int l;

	for (u = 'a'; u <= 'z'; u++)
	{
		putchar(u);
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
		putchar('\n');
		return (0);
}
