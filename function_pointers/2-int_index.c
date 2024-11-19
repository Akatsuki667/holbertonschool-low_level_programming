#include "function_pointers.h"
/**
 * int_index - recherhe un nb entier
 * @array: pointeur vers tableau d'entiers
 * @size: nb d'éléments dans array
 * @cmp: poiteur vers fonction qui s'appliquera à chaque élément
 * Return: -1 si aucune correspondance
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
/* index parcourir array */
if (array == NULL || cmp == NULL || size <= 0)
/* condition vérification validité paramètre */
return (-1);
/* si array vide retour valeur d'erreur */
for (i = 0; i < size; i++)
/* parcourir indices array */
{
if (cmp(array[i]) != 0)
/* application fonction cmp sur chaque élément */
return (i);
/* retourne indice élément de comparaison*/
}
return (-1);
/* valeur de retour -> aucune correspondance trouvé */
}
