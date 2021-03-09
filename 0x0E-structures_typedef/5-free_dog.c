#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees the dog
 * @d: struct dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);

}
