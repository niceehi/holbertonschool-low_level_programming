#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to the dog to be freed
 *
 * Description: frees the memory allocated for name, owner and the struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{

		free(d->name);
		free(d->owner);

		free(d);
	}
}