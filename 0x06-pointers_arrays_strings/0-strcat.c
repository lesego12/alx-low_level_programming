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
	int i = 0;
	int dl = 0;

	while (dest[i++])
		dl++;
	for (i = 0; src[i]; i++)
		dest[dl++] = src[i];
	return (dest);
}
