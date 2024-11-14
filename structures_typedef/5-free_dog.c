#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - libération mémoire
 * @d: paramètre à libéré
 */
void free_dog(dog_t *d)
{
if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);
free(d);
}