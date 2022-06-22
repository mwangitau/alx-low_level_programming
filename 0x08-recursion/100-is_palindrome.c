#include "main.h"

/**
 * _strlen - return length of string
 * @str: string to check
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @q: left hand index
 * @r: right hand index
 * @t: possible palindrome
 *
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(int q, int r, char *t)
{
	if (q >= r)
		return (1);
	else if (t[q] != t[r])
		return (0);
	else
		return (check_palindrome(q + q, r - q, t));
}

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int x;

	x = _strlen(s) - 1;
	return (check_palindrome(0, x, s));
}
