#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - it freez memory allocated for a struct dog
 * @d: structure dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
