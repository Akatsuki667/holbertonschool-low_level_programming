#include "main.h"

void puts_half(char *str)
{
char *ptr = str;
/* limite à droite */
char *str_1;
/* pointer vers le début de la chaîne */
/* permet manipulation de la chaîne sans perdre valeur initiale */
while (*ptr != '\0')
ptr++;
/* Déplacement pointeur jusqu'à le caractère NULL */
str_1 = str + (ptr + 1 - str) / 2;
/* pointer vers la moitié de la chaîne*/
while (*str != '\0')
{
if (str < str_1)
str++;
else
{
_putchar(*str);
str++;
}
}
}
