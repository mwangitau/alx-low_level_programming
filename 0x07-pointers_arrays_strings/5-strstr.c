#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of neddle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x = 0, y = 0;

	while (haystac[x])
	{
		while (needle[y] && (haystack[x] == needle[0]))
		{
			if (haystack[x  + y] == needle[y])
				y++;
			else
				break;
		}
		if (needle[y])
		{
			x++;
			y = 0;
		}
		else
			return (haystack + x);
	}
	return (0);
}
