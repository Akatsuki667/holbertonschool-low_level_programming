#include "main.h"
/**
 * puts2 - description
 * _putchar - description
 * @str: description
 */
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str += 2;
/* incrémente de 2 pour affichage un caractère sur 2*/
}
_putchar('\n');
}
