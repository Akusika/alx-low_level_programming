#include <stdio.h>

/**
 * main - entry point
 * Description - "alphabets printed in lowercase and uppercase"
 * Return: always 0
 */

int main(void)
{
	int c = 97;
	int c = 65;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar("\n");
	return (0);
}
