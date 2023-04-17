#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int len_name, len_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	len_name = strlen(name);
	len_owner = strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpyname = malloc(len_name + 1);
	if (cpyname == NULL) {
		free(new_dog);
		return (NULL);
	}
	strcpy(cpyname, name);

	cpyowner = malloc(len_owner + 1);
	if (cpyowner == NULL) {
		free(new_dog);
		free(cpyname);
		return (NULL);
	}
	strcpy(cpyowner, owner);

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}

