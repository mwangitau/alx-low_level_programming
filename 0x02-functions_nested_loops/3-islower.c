/*
 * File: 3-islower.c
 *
 */

#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked.
 *
 * Returns: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
