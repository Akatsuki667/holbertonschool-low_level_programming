#include "main.h"

/**
 * print_alphabet - description
 */

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}

/**
 * print_alphabet_x10 - imprime l'alphabet en minuscules 10 fois
 *
 * Cette fonction appelle la fonction print_alphabet() 10 fois
 * pour imprimer l'alphabet suivi d'un retour à la ligne.
 */

void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
print_alphabet();
}
}
