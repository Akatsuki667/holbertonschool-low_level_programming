#include "main.h"
/**
 * print_line - Affiche une ligne de caractères de soulignement '_'
 * @n: nombre de caractères de soulignement à afficher
 *
 * Description: Cette fonction affiche ligne horizontale de '_'
 */
void print_line(int n)
{
int x = 0;
/* variable : utilisé comme compteur dans la boucle */
if (n > 0)
/* condition : n supérieur à 0, exécution du code */
{
while (x < n)
/*boucle qui itère tant que x est inférieur à n */
/* permet la répéttion d'affichage char */
{
_putchar('_');
x++;
/* incrémentation à chaque itération, permet la progression de la boucle */
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
