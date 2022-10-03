#include "holberton.h"

/**
 * _strcmp - prototype to compare strings
 * @s1: string variable
 * @s2: string variable
 *
 * Return: 0
 */

int _strcmp(char *s1, char  *s2)
{
	int comp = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (comp == 0)
		return (0);
	else
		return (0);
}
