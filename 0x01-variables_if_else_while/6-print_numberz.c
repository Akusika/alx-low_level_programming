#include <stdio.h>
/**
 * main - entry point
 * Description - prints base 10 numbers each on a new line
 * Return: always 0
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
