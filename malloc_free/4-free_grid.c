#include "main.h"
#include <stdlib.h>
/**
 * free_grid - libération allocation mémoire
 * @grid: tableau à libérer
 * @height: lignes à libérer
 */
void free_grid(int **grid, int height)
{
int i = 0; /* index parcourir lignes */
while (i < height)
{
free(grid[i]); /* libération élément dans la ligne */
i++; /* incrémentation adresse mémoire suivante */
}
free(grid); /* libération mémoire tableau */
}
