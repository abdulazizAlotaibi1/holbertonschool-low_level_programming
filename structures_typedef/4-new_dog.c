#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Return: pointer to new string, or NULL if failed
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - creates a new dog_t instance
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog_t, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	d->owner = _strdup(owner);
	d->age = age;

	if ((name != NULL && d->name == NULL) ||
	    (owner != NULL && d->owner == NULL))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	return (d);
}
