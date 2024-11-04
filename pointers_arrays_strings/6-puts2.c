#include "main.h"
/**
 * puts2 - affichage un caractère sur 2 str
 * _putchar - implémentation caractère
 * @str: paramètre fonction
 */
void puts2(char *str)
{
char *ptr = str;
/* pointer vers le début de la chaîne */
/* permet manipulation de la chaîne sans perdre valeur initiale */
while (*ptr != '\0')
ptr++;
/* Déplacement pointeur jusqu'à le caracteère NULL */
while (str <= ptr - 1)
/* s'assurer que str pointe vers un carcatère valide */
/* s'assurer que str ne dépasse pas le dernier caractère réel*/
{
_putchar(*str);
str += 2;
/* affichage un caractère sur deux */
}
}
