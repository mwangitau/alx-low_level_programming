#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *k;

	if (size == 0)
		return (NULL);
	k = malloc(size * sizeof(char));
	if (k == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		a[j] = c;
	}
	return (k);
}
