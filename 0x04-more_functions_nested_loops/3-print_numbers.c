#include "main.h"

/**
 * print_number - prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; 1++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
