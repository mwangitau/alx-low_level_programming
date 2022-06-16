#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @x: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *x)
{
	int l = 0;

	while (x[l])
	{
		while (!(x[l] >= 'a' && x[l] <= 'z'))
			l++;

		if (x[l - 1] == '' ||
				x[l - 1] == '\t' ||
				x[l - 1] == '\n' ||
				x[l - 1] == ',' ||
				x[l - 1] == '.' ||
				x[l - 1] == ';' ||
				x[l - 1] == '!' ||
				x[l - 1] == '?' ||
				x[l - 1] == '"' ||
				x[l - 1] == '(' ||
				x[l - 1] == ')' ||
				x[l - 1] == '{' ||
				x[l - 1] == '}' ||
				l == 0)
			x[l] -= 32;
		l++;
	}

	return (x);
}

