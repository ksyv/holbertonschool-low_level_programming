#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog and copy the first
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = NULL;
	int lengthname = 0, lengthowner = 0;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	while (name[lengthname])
		lengthname++;
	newdog->name = malloc(lengthname + 1);
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (lengthname = 0; name[lengthname]; lengthname++)
		newdog->name[lengthname] = name[lengthname];
	newdog->name[lengthname] = '\0';
	while (owner[lengthowner])
		lengthowner++;
	newdog->owner = malloc(lengthowner + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (lengthowner = 0; owner[lengthowner]; lengthowner++)
		newdog->owner[lengthowner] = owner[lengthowner];
	newdog->owner[lengthowner] = '\0';
	newdog->age = age;
	return (newdog);
}
