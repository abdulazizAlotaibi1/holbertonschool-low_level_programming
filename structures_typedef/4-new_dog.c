#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    if (name != NULL)
    {
        d->name = malloc(strlen(name) + 1);
        if (d->name == NULL)
        {
            free(d);
            return (NULL);
        }
        strcpy(d->name, name);
    }
    else
        d->name = NULL;

    d->age = age;

    if (owner != NULL)
    {
        d->owner = malloc(strlen(owner) + 1);
        if (d->owner == NULL)
        {
            free(d->name);
            free(d);
            return (NULL);
        }
        strcpy(d->owner, owner);
    }
    else
        d->owner = NULL;

    return (d);
}
