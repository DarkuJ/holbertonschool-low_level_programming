#include "holberton.h"

/**
 * _strncat - prototype for two strings
 *@dest: char to check
 *@src: char to check
 * Return: dest
 * @n: an int
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	n = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		n++;
		i++;
	}
	dest[i] = n;

	return (dest);
}
