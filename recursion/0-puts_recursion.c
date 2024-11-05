#include "main.h"
/**
 * _puts_recursion - focntion affiche chaîne de caractère
 * _putchar - affiche caractère par caractère
 * @s: chaîne de caractère à affciher
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
/* condition de fin */
/* vérification si caractère actuel n'est pas le caractère NULL */
{
_putchar(*s);
/* afichage carcatère actuel */
s++;
/* incrémente le pointeur vers le caractère suivant */
_puts_recursion(s);
/* appel récursif de la fonction */
}
else
_putchar('\n');
/* si fin de la chaîne affiche retour à la ligne */
}
