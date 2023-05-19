#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes to allocate
 * Description: allocates memory using malloc
 * Return: pointer to allocated memory or terminates with a value of 98 if fail
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
