#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that intializes a variable of type struct dog
 * @d:structure to initialize
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
