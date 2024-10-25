#include "main.h"
/**
 * print_last_digit - Calcule et affiche le dernier chiffre d'un entier
 * @i: L'entier dont on souhaite obtenir le dernier chiffre
 * Return: Le dernier chiffre de l'entier (toujours positif)
 */
int print_last_digit(int i)
{
int last_digit = i % 10;
/* Calcule le dernier chiffre de i */
if (last_digit < 0)
/* Assure que last_digit est positif */
{
last_digit = -last_digit;
}
_putchar(last_digit + '0');
/* Affiche le dernier chiffre comme un caractère */
return (last_digit);
/* Retourne le dernier chiffre en tant qu'entier */
}
