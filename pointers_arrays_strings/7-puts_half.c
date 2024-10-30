#include "main.h"

void puts_half(char *str)
{
char *ptr = str;
/* déclaration pointeur adresse mémoire str */
char *str_1 = str;
/* permet manipulation de la chaîne sans perdre valeur initiale */
while (*ptr != '\0')
ptr++;
/* Déplacement pointeur jusqu'à le caractère NULL */
str_1 = str + ((ptr + 1 - str) / 2);
/* valeur pointeur équivalent calcul de la longuer désirer str */
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
