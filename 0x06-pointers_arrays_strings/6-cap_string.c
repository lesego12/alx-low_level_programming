#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be modified
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int a;
	int b;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'}

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a == 0 && s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;

		for (b = 0; b < 13; b++)
		{
			if (s[a] == spe[b])
			{
				if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
				{
					s[a + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
