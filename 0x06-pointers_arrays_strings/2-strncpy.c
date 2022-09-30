#include "holberton.h"

/**
 * _strncpy - prototype for  function
 *@dest: a buffer
 *@src: source
 *@n: max number of bytes
 *Description: copies two strings to dest
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	size_t  i;

	for  (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
