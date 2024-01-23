#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees the memory allocated for struct dog
 * @d: Struct dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free (d);
	}
}
