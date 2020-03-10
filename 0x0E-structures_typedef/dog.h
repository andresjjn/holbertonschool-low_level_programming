#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Dog
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner
 *
 * Description: Dog object
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
