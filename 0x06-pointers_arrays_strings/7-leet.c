#include "holberton.h"

/**
 * leet - make leet speak like a nerd
 * @s: string variable
 *
 * Return: s value
 */

char *leet(char *)
{
	int i;
	int n;
	char alpha[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (n = 0; alpha[n]; n++)
		{
			if (s[i] == alpha[n])
			{
				s[i] = num[n];
			}
		}
	}
	return (s);
}
