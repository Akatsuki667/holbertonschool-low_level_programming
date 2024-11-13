#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialise une variable de type struct dog
 * @d: pointeur sur la structure de type struct dog à initialiser
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire du chien
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
/* vérification pointeur non NULL -> éviter pla,ntage programme*/
{
d->name = name;
d->age = age;
d->owner = owner;
/* initialisation de chaque champ avec valeur en arguments */
}
}
