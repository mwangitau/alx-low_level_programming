#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog -new dog
 * @name: name of the dog
 * @owner: owner's dog
 * @age: age of the dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x = 0, y = 0, z;
	dog_t *cigi;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;
	cigi = malloc(sizeof(dog_t));
	if (cigi == NULL)
	{
		free(cigi);
		return (NULL);
	}
	cigi->name = malloc(x * sizeof(cigi->name));
	if (cigi->name == NULL)
	{
		free(cigi->name);
		free(cigi);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		cigi->name[z] = name[z];
	cigi->age = age;
	cigi->owner = malloc(y * sizeof(cigi->owner));
	if (cigi->owner == NULL)
	{
		free(cigi->owner);
		free(cigi->name);
		free(cigi);
		return (NULL);
	}
	for (z = o; z <= y; z++)
		cigi->owner[z] = owner[z];
	return (cigi);
}
