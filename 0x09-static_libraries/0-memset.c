#include "main.h"
/**
 * _memset - function fill a memory with bytes
 * @s:  memory to be filled
 * @b: value to be copied
 * @n: number of times to copy
 * Return: new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
