#include "main.h"
/**
 * _strpbrk - searches strings for any of set of bytes
 * @s: input vakues
 * @accept: input values
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
