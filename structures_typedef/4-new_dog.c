#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Pointer to the new dog structure, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int len, size;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    if (name != NULL)
    {
        len = strlen(name);
        dog->name = malloc(sizeof(char) * (len + 1));
        if (dog->name == NULL)
        {
            free(dog);
            return (NULL);
        }
        strcpy(dog->name, name);
    }
    else
    {
        dog->name = NULL;
    }

    if (owner != NULL)
    {
        size = strlen(owner);
        dog->owner = malloc(sizeof(char) * (size + 1));
        if (dog->owner == NULL)
        {
            free(dog->name);
            free(dog);
            return (NULL);
        }
        strcpy(dog->owner, owner);
    }
    else
    {
        dog->owner = NULL;
    }

    dog->age = age;

    return (dog);
}
