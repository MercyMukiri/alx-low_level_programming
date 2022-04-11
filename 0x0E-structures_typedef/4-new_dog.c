#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct dog, or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_copy, owner_copy;
	dog_t *new_doggie;

	new_doggie = malloc(sizeof(dog_t));

	if (new_doggie == NULL || !(name) || !(owner))
	{
		free(new_doggie);
		return (NULL);
	}

	for (name_copy = 0; name[name_copy]; name_copy++)
		;

	for (owner_copy = 0; owner[owner_copy]; owner_copy++)
		;

	new_doggie->name = malloc(name_copy + 1);
	new_doggie->owner = malloc(owner_copy + 1);

	if (!(new_doggie->name) || !(new_doggie->owner))
	{
		free(new_doggie->name);
		free(new_doggie->owner);
		free(new_doggie);
		return (NULL);
	}

	for (i = 0; i < name_copy; i++)
		new_doggie->name[i] = name[i];
	new_doggie->name[i] = '\0';

	new_doggie->age = age;

	for (i = 0; i < owner_copy; i++)
		new_doggie->owner[i] = owner[i];
	new_doggie->owner[i] = '\0';

	return (new_doggie);
}
