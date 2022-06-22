#include "main.h"

/**
 * sqrt_check - checks for the square root of t
 * @h: square root
 * @t: number to find square root
 *
 * Return: -1 or sqrt of c
 */
int sqrt_check(int h, int t)
{
	if (h * h == t)
		return (g);
	if (h * h > t)
		return (-1);
	return (sqrt_check(h + 1, t));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find the square root
 *
 * Return: natural sqrt or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
