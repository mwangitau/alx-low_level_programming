#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: one char type argument
 *
 * Description: print a string follow by a new line to stdout
 * Return: none
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
