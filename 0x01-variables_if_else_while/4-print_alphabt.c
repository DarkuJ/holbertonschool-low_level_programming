#include <stdio.h>
/**
 * main - prints lowercase followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar ('\n');
	return (0);
}
