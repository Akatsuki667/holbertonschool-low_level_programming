#include "main.h"
#include <stdio.h>
/**
 * print_array - afficher un array
 * @a : paramètre int
 * @n : paramètre int
 */
void print_array(int *a, int n)
{
int i;
/* index pour parcourir éléments tableau a */
for (i = 0; i < n; i++)
/* parcours premiers éléments tableau */
{
printf("%d", a[i]);
if (i < n - 1)
/* condition vérifiant si a[i] est le dernier élément */
/* ajouter une virgule et un espace pour tous les éléments sauf le dernier */
printf(", ");
}
printf("\n");
}
