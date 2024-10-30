#include "main.h"
/**
 * puts2 - description
 * _putchar - description
 * @str: description
 */
void puts2(char *str)
{
int i = 0;
/* permet l'imitation de l'index, évite prise en compte valeur parasite */
while (str[i] != '\0')
{
_putchar(str[i]);
str += 2;
/* incrémente de 2 pour affichage un caractère sur 2*/
}
_putchar('\n');
}
