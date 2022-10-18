#include <stdio.h>
#include <main.h>

int putchar(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	putchar();
	return (0);
}

int putchar(void)
{
	char a[9] = "_putchar";
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(a[b]);
	}
	putchar('\n');
	return (0);
}
