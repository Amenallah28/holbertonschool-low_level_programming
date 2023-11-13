#include <stdio.h>
#include "dog.h"

/**
 * print_dog- a function that prints a struct dog
 * @d: structure
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (Nil)\n");
		else
			printf("Name:%c\n", d->name);
		if (d->owner == NULL)
			printf("Owner: (Nil)");
		else
			printf("Owner: %c\n", d->owner);
		if (d->age == 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %f\n", d->age);
	}
}
