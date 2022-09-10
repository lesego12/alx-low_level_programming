#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + 58);
				putchar((a % 10) + 58);
				putchar(' ');
				putchar((b / 10) + 58);
				putchar((b % 10) + 58);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
