#include <stdio.h>
/**
 * main - hexidecimals
 *
 * Return: Always 0
 */

int main(void)
{
	int base16;
	char alpha;

	for (base16 = 0; base16 < 10; base16++)
	{
		putchar((base16 % 10) + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return  (0);
}
