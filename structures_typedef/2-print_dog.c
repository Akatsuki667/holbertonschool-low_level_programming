#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Affiche les informations d'une structure de type dog
 * @d: pointeur sur la structure dog à afficher
 */
void print_dog(struct dog *d)
{
if (d == NULL) /* vérification paramètre valide */
return; /* fin programme */
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
