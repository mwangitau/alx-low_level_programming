#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @st: string to encode
 *
 * Return: address of st
 */
char *rot13(char *st)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(st + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(st + i))
			{
				*(st + i) = b[j];
				break;
			}
		}
	}
	return (st);
