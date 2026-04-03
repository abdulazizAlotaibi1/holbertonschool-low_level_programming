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

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name != NULL)
	{
		for (len = 0; name[len]; len++)
			;
		d->name = malloc(len + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; i <= len; i++)
			d->name[i] = name[i];
	}
	else
		d->name = NULL;

	d->age = age;

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
