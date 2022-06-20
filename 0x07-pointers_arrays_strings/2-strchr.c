#include "mian.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: chracter to chec fo
 *
 * Return: pointer to spot in s wih c or null
 */
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; *(s + t); t++)
	{
		if (*(s + t) == c)
			return (s + t);
	}
	if (*(s + t) == c)
		return (s + t);
	return (0);
}
