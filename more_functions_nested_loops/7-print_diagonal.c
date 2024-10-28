#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
int c, i;
c = 0;
while (n > 0)
/* boucle principale */
/* s'éxécute n fois pour dessiner la ligne diagonale */
{
i = c;
/* initialise la valeur de c à i */
while (i > 0)
/* boucle interne */
{
_putchar(' ');
i--;
}
_putchar('\\');
_putchar('\n');
c++;
n--;
}
if (c < 1)
_putchar('\n');
}
