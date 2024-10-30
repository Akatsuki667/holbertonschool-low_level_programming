#include "main.h"
/**
 * print_rev - description
 * _putchar - description
 * @s: description
 */
void print_rev(char *s)
{
int i;
/* parcourir la chaîne de la fin vers le début */
int reverse = 0;
/* compte nb de caractère */
while (s[reverse] != '\0')
/* boucle itère jusqu'au carcatère NULL */
{
reverse++;
}
/* boucle reconstruction fonction strlen */
for (i = reverse - 1; i >= 0; i--)
/* affichage reverse */
{
_putchar(s[i]);
/* affcihe le carcatère de l'indice [i] */
}
_putchar('\n');
}
