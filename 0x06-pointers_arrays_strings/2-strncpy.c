#include "holberton.h"
/**
 *_strncpy - prototype for string
 *@dest: buffer for stirng
 *@src: source for string vari
 *@n: max number of bytes
 *Return: pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
