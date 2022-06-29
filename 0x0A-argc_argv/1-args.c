#include <stdio.h>

/**
 * main - prints the name number of the arguments passed to it
 * @argc: nuber of arguments passed to the function
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
