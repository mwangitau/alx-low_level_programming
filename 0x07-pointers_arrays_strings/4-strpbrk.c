#include "main.h"

/**
 *  _strpbrk - searches a string for any of a set of bytes
 *  @s: string to check
 *  @accept: string to check against
 *
 *  Return: pointer to byte in s that matches or nullif no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (accept[y])
			return (s + x);
	}
	return (0);
}
