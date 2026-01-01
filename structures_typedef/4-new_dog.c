#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	name_len = strlen(name);
	my_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->name, name);

	owner_len = strlen(owner);
	my_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->owner, owner);

	my_dog->age = age;

	return (my_dog);
}