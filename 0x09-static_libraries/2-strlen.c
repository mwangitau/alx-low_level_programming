#include "main.h"

/**
 * _strlen - return length of string s.
 * @s: pointer type character.
 *
 * Description: strlen similiar function to return length
 * Return: String.
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
