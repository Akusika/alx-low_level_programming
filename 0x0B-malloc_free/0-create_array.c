#include "main.h"
#include <stdlib.h>

/**
 *create_array - create an array of chars and initialize with char
 *@size: size of array
 *@c: char to be initialized
 *Description: create an array of chars and initialize with char
 *Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	
	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
