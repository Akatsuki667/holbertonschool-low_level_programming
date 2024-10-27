#include "main.h"
/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
int x, y, z, u, d;
/**
 * x : représente les multiplicateurs
 * y : repésentente les multiplicandes
 * z : Stockage résultat x*y
 * u / d : extraire chiffre dizaines / unités lorsque z>9
 */
for (x = 0; x <= 9; x++)
/* itère sur chaque ligne table de 9 */
{
for (y = 0; y <= 9; y++)
/* itère sur chaque colonne */
{
z = x * y;
if (z > 9)
{
u = z % 10;
/* donne le chiffre des unités */
d = (z - u) / 10;
/* donne le chiffre des dizaines */
_putchar(44);
/* imprime une virgule */
_putchar(32);
/* imprime un espace */
_putchar(d + '0');
/* impression des dizaines (décalé par '0' pour convertir en ASCII) */
_putchar(u + '0')
/* impression unités */
}
else
{
if (y != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(z + '0');
}
}
_putchar('\n');
}
}
