#include "dog.h"
/**
 * init_dog - initialize a variable of type dog
 * @d: adress of mydog
 * @name: mydog's name
 * @age: mydog's age
 * @owner: mydog's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return(0);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
