#include "main.h"

/**
 * main - print _putchar, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";
	char c;

	for (c = 0; c < 8; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
	return (0);
}
