#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: Pointer of struct.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
