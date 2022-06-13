#include "main.h"

/**
 * swap_int - Function that swaps two integer values
 * @a: 1st argument int type
 * @b: 2nd argument int type
 *
 * Description: Using pointer to change value of a and b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
