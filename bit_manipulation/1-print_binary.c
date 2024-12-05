#include "main.h"
/**
 * print_binary - imprimer le binaire d'un entier
 * @n: entier à convertir en binaire
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1; /* variable test bits par bits */
/* initialisé à 1 -> bit le moins significatif */
int flag = 0; /* variable détection pour afficher bit significatif */
mask <<= (sizeof(n) * 8 -1);
while (mask > 0) /* boucle test bits */
{
if (n & mask) /* Opération AND bit à bit */
{
_putchar('1');
flag = 1; /* bit significatif trouvé */
/* -> il faut donc afficher tout les bits suivant */
}
else if (flag)
_putchar('0');
mask >>= 1; /* déplacement bit vers la droite */
/* test du bit suivant */
}
if (!flag)
_putchar('0');
}
