#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog_t instance
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    int i, len;

    /* Allocate memory for the dog structure */
    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    /* Copy name */
    if (name != NULL)
    {
        for (len = 0; name[len]; len++)  /* calculate length manually */
            ;
        d->name = malloc(len + 1);
        if (d->name == NULL)
        {
            free(d);
            return (NULL);
        }
        for (i = 0; i <= len; i++)  /* copy character by character including '\0' */
            d->name[i] = name[i];
    }
    else
        d->name = NULL;

    d->age = age;

    /* Copy owner */
    if (owner != NULL)
    {
        for (len = 0; owner[len]; len++)
            ;
        d->owner = malloc(len + 1);
        if (d->owner == NULL)
        {
            free(d->name);
            free(d);
            return (NULL);
        }
        for (i = 0; i <= len; i++)
            d->owner[i] = owner[i];
    }
    else
        d->owner = NULL;

    return (d);
}
