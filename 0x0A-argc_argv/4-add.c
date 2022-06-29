#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: 0 if no error, else 1
 */
int main(int argc, char *argv[])
{
	int j = 0, k, l;

	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l]; l++)
		{
			if (isdigit(argv[k][l]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (k = 1; k < arg; k++)
	{
		j += atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
