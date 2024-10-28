#include "main.h"
/**
 * more_numbers - description
 */
void more_numbers(void)
{
int i;
/* variable stockera itération de x pour l'afficher */
int x;
/* variable stocker itération suite de nb */
for (i = 0; i < 10; i++)
/* boucle externe : itère 10x pour affichage */
{
for (x = 0; x < 15; x++)
/* boucle interne : itère pour obtenir les chiffres */
{
if (x > 9)
{
_putchar((x / 10) + '0');
/* obtient la dizaine */
}
_putchar((x % 10) + '0');
/* obtient l'unité */
}
_putchar('\n');
}
}

