#include "main.h"
/**
 * more_numbers - description
 */
void more_numbers(void)
{
int i;
int x;
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

