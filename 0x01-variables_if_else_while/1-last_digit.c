/*
 * File: 
 * Auth:
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main- Program will assign a random number to the variable n each time it is executed.
 * 	To print whether the number stored in the variable n is positive or negative.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else 
		printf("%d is zero\n", n);
	
	return (0);
}
