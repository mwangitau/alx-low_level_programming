#include "main.h"

/**
 * _memset - fills first n bytes pointed by @s with constant @b
 * @s: pointer to the memory area to be filled.
 * @b: character to fill memory area with.
 * @n: number of bytes to be filled.
 *
 * Return: pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		*(s + t) = b;
	}
	return (s);
}
