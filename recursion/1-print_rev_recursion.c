#include "main.h"
/**
 * _print_rev_recursion - affiche s en reverse
 * _putchar - affiche le caractère
 * @s: caractère à afficher
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
/* condition de fin */
/* vérification si caractère actuel n'est pas le caractère NULL */
{
_print_rev_recursion(s + 1);
/* appel récursif caractère suivant, parcourir la chaîne jusqu'au NULL */
_putchar(*s);
/* une fois que s pointe caractère NULL, affichage ordre inversé */
}
}
