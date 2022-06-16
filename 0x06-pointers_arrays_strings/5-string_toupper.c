#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @x: string to change
 *
 * Return: address of x
 */
char *string_toupper(char *x)
{
	int l = 0;

	while (*(x + l))
	{
		if (*(x + l) >= 'a' && *(x + l) <= 'z')
			*(x + l) -= 32;
		l++;
	}
	return (x);
}
