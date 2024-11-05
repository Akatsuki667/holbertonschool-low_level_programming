#include "main.h"
/**
 * print_chessboard - affiche un échiquier
 * @a: tableau 2D craractère représentant l'échequier
 */
void print_chessboard(char (*a)[8])
{
int x;
int y;
/* x,y = index parcourir tableau bidimensionnel */
for (x = 0; x < 8; x++)
/* parcourir ligne échiquier */
{
for (y = 0; y < 8; y++)
/* parcourir colone échiquier */
{
_putchar(a[x][y]);
/* affiche élément de la ligne et colonne */
}
_putchar('\n');
}
}
