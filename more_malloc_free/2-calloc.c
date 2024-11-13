#include "main.h"
#include <stdlib.h>
/**
 * _calloc - initialisation zone mémoire à zéro
 * @nmemb: nb éléments à stocker
 * @size: taille en octets éléments
 * Return: retourne pointeur adresse mémoire bloc de code
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *array;
/* pointeur allocation correspondant type de retour fonction */
unsigned int i;
if (nmemb == 0 || size == 0)
/* vérification paramètres valide*/
return (NULL);
/* fonction retourne NULL */
array = malloc(nmemb * size); /* allocatin mémoire */
if (array == NULL) /* vérification échec malloc */
return (NULL); /* échec malloc */
for (i = 0; i < nmemb * size; i++)
array[i] = 0;
/* initialisation emplacement mémoire à zéro */
return (array);
/* renvoi pointeur pour utilisation bloc mémoire pointée */
}
