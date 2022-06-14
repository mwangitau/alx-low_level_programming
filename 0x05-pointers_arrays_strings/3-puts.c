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
	int 1 = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[1]);
	}
	_putchar('\n');
}
