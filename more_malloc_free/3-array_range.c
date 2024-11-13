#include "main.h"
#include <stdlib.h>
/**
 * array_range - création tableau de int
 * @min: plus petit int
 * @max: plus grand int
 * Return: poiteur vers le tableau ou NULL
 */
int *array_range(int min, int max)
{
int *array;
/* pointeur stocker adresse tableau allouer dynamiquement */
int i;
/* index boucle remplir array */
int calcul = max - min + 1;
/* calcul nb total éléments */
if (min > max) /* vérification paramètres valide */
return (NULL); /* paramètres non valide retour fonction NULL */
array = malloc(calcul * sizeof(int));
/* allocation mémoire */
if (array == NULL)
/* vérification malloc */
return (NULL);
/* échec malloc retour fonction NULL */
for (i = 0; i < calcul; i++)
/* initialisation/vérification/MAJ index i à chaque itération */
array[i] = min++;
/* affectation valeur à chaque position i dans array */
/* array[i] = cible position dans array */
/* min++ = incrémentation de min */
return (array);
/* retour pointeur vers début tableau int */
}
