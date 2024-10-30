#include "main.h"
#include <stdio.h>
/**
 * print_array - description
 * @a : description
 * @n : description
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
/* permettant d'afficher le dernier chiffre sans virgule */
printf(", ");
}
printf("\n");
}
