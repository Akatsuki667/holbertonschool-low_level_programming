#include "function_pointers.h"
/**
 * array_iterator - appliquer une fonction donnée à chaque élément
 * @array: contient élément sur lequel la fonction sera aplliqué
 * @size: nb d'éléments sur lequel la fonction s'applique
 * @action: pointeur de fonction qui s'applique sur chaque élément
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
/* index itération élément array de type size_t*/
if (array == NULL || action == NULL)
/* vérification validité paramètres */
return;
/* si paramètres invalides retour de fonction */
for (i = 0; i < size; i++)
/* parcourt indices tableau*/
action(array[i]);
/* chaque indice, l'élément correspondant passé comme argument à action */
}
