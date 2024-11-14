#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - renvoi pointeur vers allocation dynamique copie string
 * @str: string à copier
 * Return: pointeur à renvoyer
 */
char *_strdup(char *str)
{
char *cp_str;
int i;
int len;
if (str == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)
;
cp_str = malloc((len + 1) * sizeof(char));
if (cp_str == NULL)
return (NULL);
for (i = 0; i < len; i++)
cp_str[i] = str[i];
cp_str[len] = '\0';
return (cp_str);
}
/**
 * new_dog - Initialise nouvelle variable de type struct dog
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire du chien
 * Return: le gros dogo
 */
dog_t *new_dog(char *name, float age, char *owner)
/* dog_t = type de retour défni par typedef */
{
dog_t *dog; /* création structure dog pour dog_t */
dog = malloc(sizeof(dog_t));
if (dog == NULL) /* vérification malloc */
return (NULL); /* si échec malloc retour fonction */
dog->name = _strdup(name);
/* copie paramètre nex_dog dans élément struct dog*/
if (dog->name == NULL) /* vérification élément */
{
free(dog); /* libération de mémoire */
return (NULL); /* échec élément retour fonction*/
}
dog->age = age;
dog->owner = _strdup(owner);
if (dog->owner == NULL)
{
free(dog->name);
/* si erreur pas besoin zone mémoire pour dog->name */
free(dog);
return (NULL);
}
return (dog);
}
