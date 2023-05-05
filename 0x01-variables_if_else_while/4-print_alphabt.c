#include <stdio.h>
/**
 * main - entry point
 * Description - prints aphabets in a lowercase
 * Return: always 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 122)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
