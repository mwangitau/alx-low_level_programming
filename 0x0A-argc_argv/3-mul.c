#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints all arguments it recieves
 * @argc: number if arguments passed to the function
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: 0 if no error, else return 1
 */
int main(int argc, char *argv[])
{
	int j, k, l;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	j = atoi(argv[1]);
	k = atoi(argv[2]);
	l = j * k;
	printf("%d\n", l);
	return (0);
}
