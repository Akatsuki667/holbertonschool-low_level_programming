#include "main.h"
#include <stdlib.h>
#include <string.h> /* bibliothèque incluant fonction memset */
/**
 * _calloc - initialisation zone mémoire à zéro
 * @nmemb: nb éléments à stocker
 * @size: taille en octets éléments
 * Return: retourne pointeur adresse mémoire bloc de code
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array;
/* pointeur allocation correspondant type de retour fonction */
unsigned int calcul = nmemb * size;
/* stockage calcul taille totale mémoire allouer */
if (nmemb == 0 || size == 0)
/* vérification paramètres valide*/
return (NULL);
/* fonction retourne NULL */
array = malloc(calcul); /* allocatin mémoire */
if (array == NULL) /* vérification échec malloc */
return (NULL); /* échec malloc */
memset(array, 0, calcul);
/* memset = remplir zone mémoire avec octet donné*/
/* initialisation mémoire à zéro */
return (array);
/* renvoi pointeur pour utilisation bloc mémoire pointée */
}
