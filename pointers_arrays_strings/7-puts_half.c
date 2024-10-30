#include "main.h"
/**
 * puts_half - description
 * _putchar - description
 * @str: description
 */
void puts_half(char *str)
{
char *right_bound = str
char *left_bound = str;
/* pointeur assignation de adresse mémoire str */
while (*right_bound != '\0')
right_bound++;
/* pointeur placement caractère NULL */
left_bound = str + ((right_bound + 1 - str) / 2);
/* pointeur placement au résultat du calcul de la str */
while (*str)
{
if (str >= left_bound)
{
_putchar(*str);
str++;
}
else
str++;
}
_putchar(10);
}
