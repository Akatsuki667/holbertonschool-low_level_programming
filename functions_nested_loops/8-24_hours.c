#include "main.h"
/**
 * jack_bauer - description
 * _putchar - description
 */

void jack_bauer(void)
{
int h, m;
for (h = 0; h <= 23; h++)
/* Boucle pour les heures */
{
for (m = 0; m <= 59; m++)
/* Boucle pour les minutes */
{
/* Afficher l'heure au format HH:MM */
_putchar('0' + (h / 10));
/* Premier chiffre de l'heure */
_putchar('0' + (h % 10));
/* Deuxième chiffre de l'heure */
_putchar(':');
_putchar('0' + (m / 10));
_putchar('0' + (m % 10));
_putchar('\n');
}
}
}
