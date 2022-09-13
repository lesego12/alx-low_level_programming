#include "main.h"

/**
 * main - print _putchar, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";
	char ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
