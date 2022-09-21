#include "main.h"

/**
 * *_strcat - concatenates two strings. appends the src string,
 * overwriting the terminating null (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @src: string to be appended
 * @dest: string to be appended to
 * Return: a pointer of the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a])
		a++;

	for (b = 0; src[b]; b++)

		dest[a++] = src[b];

	return (dest);
}
