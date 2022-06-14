#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: one char type argument
 *
 * Description: print a string follow by a new line to stdout
 * Return: none
 */
void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
