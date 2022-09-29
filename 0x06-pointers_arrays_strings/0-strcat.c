#include "holberton.h"

/**
 * _strcat - prototype for two strings
 *@dest: char to check
 *@src: char  to  check
 * Return: 0 if success
 */

char *_strcat(char *dest, char *src);
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	dest[a] = src[a];
	dest[a] = '\0';
	return (dest);

}
