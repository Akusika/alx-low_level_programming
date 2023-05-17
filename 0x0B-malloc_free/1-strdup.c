#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - copy a string to a parameter
 *@str: char to duplicste
 *Description: a pointer which contains a copy of a string to a parameter
 *Return: pointer to string copied or NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}