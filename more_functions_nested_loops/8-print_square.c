#include "main.h"
/**
 * print_square - description
 * @size: description
 * Description: Can only use _putchar to print
 */
void print_square(int size)
{
int x = 0;
/* x = compteur des lignes */
int y;
/* compteur colonnes, rénitialisé à chaque nouvelle ligne */
if (size > 0)
{
while (x < size)
/* boucle principale */
/* s'exécute size fois, contrôle nb de lignes du carré */
{
while (y < size)
/* boucle interne */
/* s'exécute size fois pour afficher size #, formant ligne de caractères */
{
_putchar('#');
y++;
}
y = 0;
x++;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
