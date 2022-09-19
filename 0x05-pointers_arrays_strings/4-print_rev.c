#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @str: string to be printed
 */
void print_rev(char *s)
{
	int a, b, len;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	len = a;

	for (b = len - a; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
