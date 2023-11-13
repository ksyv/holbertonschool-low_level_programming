#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free memory
 * @d: adress of dog_t
*/
void free_dog(dog_t *d)
{
		free(d->owner);
		free(d->name);
		free(d);
}
