#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocation mémoire, vérification de cette allocation
 * @b: quantité de mémoire à allouer
 * Return: pointeur contenant adresse mémoire
 */
void *malloc_checked(unsigned int b)
{
char *array;
/* pointeur mémoire allouer */
array = malloc(b * sizeof(char));
/* allocation bloc mémoire */
if (array == NULL)
/* vérification échec malloc */
exit(98);
/* fin d'exécution */
/* code de sortie -> 98 */
return (array);
/*  retour pointeur allocation mémoire */
}
