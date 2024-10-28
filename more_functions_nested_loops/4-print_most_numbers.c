#include "main.h"
/**
 * print_most_numbers - description
 */
void print_most_numbers(void)
{
int x;
/* index pour la boucle for */
for (x = 0; x < 10; x++)
{
if (x == 2 || x == 4)
/* condition OU : si x = 2 ou 4 */
{
continue;
/* x est ignorer et itère le prochain nb */
}
_putchar(x + '0');
}
_putchar('\n');
}
