#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'q' && low != 'e')
		{
			putchar(low);
		}
	}
		purchar('\n');
		return (0);
}
