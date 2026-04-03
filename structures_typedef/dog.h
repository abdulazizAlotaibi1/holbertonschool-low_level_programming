#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* typedef so dog_t can be used instead of struct dog */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
