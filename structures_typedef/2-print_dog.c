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
			printf("Name:%s\n", d->name);
		if (d->age == 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (Nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
