#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * Description - a program thats prints alphabets in lowercase
 * Return: always 0
 */

int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
	putchar('\n');
	return (0);
}
