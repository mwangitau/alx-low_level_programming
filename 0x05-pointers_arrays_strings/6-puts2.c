#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 1;
	}
	_putchar('\n');
}
