#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 48; j <= 49; j++)
		{
			for (k =  48; k  <= 57; k++)
			{
				if (j  !=  48)
				{
					_putchar(j);
				}
				_putchar(k);
				if (j == 49 && k == 52)
				{
					break;
				}
			}
		}
		_putchar('\n');
	}
}
