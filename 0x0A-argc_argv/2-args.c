#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed to hte function
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
