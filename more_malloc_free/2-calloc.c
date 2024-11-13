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
void *array = NULL;
/* pointeur allocation correspondant type de retour fonction */
unsigned int i;
/* index boucle initialisation octet ar*/
char *ar = NULL;
/* manipuler la mémoire octet par octet*/
if (nmemb == 0 || size == 0)
/* vérification paramètres valide*/
return (NULL);
/* fonction retourne NULL */
array = malloc(nmemb * size);
/* allocatin mémoire */
if (array == NULL)
/* vérification échec malloc */
return (NULL);
/* échec malloc */
ar = array;
/* initialisation ar vers le premier bytes array*/
for (i = 0; i < nmemb * size; i++)
ar[i] = 0;
/* initialisation chaque emplacement i mémoire à zéro */
return (array);
/* renvoi pointeur pour utilisation bloc mémoire pointée */
}
