#include "main.h"
/**
 * _puts - afficher caractère
 * _putchar - implémenter le caractère
 * @str: string à afficher
 */
void _puts(char *str)
{
while (*str != '\0')
/* boucle itère jusqu'au carcatère NULL */
{
_putchar(*str);
/* affiche la cractère de l'itération */
str++;
/* incrémente à l'itération suivante */
}
_putchar('\n');
}
