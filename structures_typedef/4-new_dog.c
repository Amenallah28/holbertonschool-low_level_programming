#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog- a function that creates a new dog.
 * @d: structure
 * @name: name
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len, size, i, j;
	char *x, *y;

	if (dog)
	{
		if (dog->name != NULL)
		{
			len = strlen(dog->name);
			x = malloc((sizeof(char)) * (len + 1));
			strcpy(x, dog->name);
		}
		else
		{
			for (i = 0; i < len; i++)
				free(dog->name[i]);
		}
		if (dog->owner != NULL)
		{
			size = strlen(dog->owner);
			y = malloc(sizeof(char) * (size + 1));
			strcpy(y, dog->owner);
		}
		else
		{
			for (j = 0; j < size; j++)
				free(dog->owner[j]);
		}
		if (dog->age != 0)
			dog->age = age;
	}
	else
		return (NULL);
}
