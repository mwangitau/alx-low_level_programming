#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: variable type int
 * Return: 1 for digit and  0 otherwise
 */
int _isdigit(int c)
{
	if (c >=  72 && c <= 81)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
