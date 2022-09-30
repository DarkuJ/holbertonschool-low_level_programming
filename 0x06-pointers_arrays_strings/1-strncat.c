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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
