#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - retourne un pointeur sur un tableau bi-dimensionnel
 * @width: largeur
 * @height: hauteur
 * Return: retourne pointeur tbaleau ou NULL en cas d'échec
 */
int **alloc_grid(int width, int height)
{
int **ar; /* poiteur tableau bidimensionnel */
int i, j; /* varibale index boucle de parcours et initialisation */
if (width <= 0 || height <= 0)
return (NULL);
/* vérification paramètres valide */
ar = (int **)malloc(height * sizeof(int *));
/* allocation mémoire lignes */
/* (int **) conversion type malloc en int */
/* chaque éléments ar sera un pointeur vers une ligne (colonnes) */
if (ar == NULL) /* vérification échec malloc */
return (NULL); /* échec malloc */
for (i = 0; i < height; i++) /* boucle allocation mémoire colonnes */
{
ar[i] = (int *)malloc(width * sizeof(int));
/* allocation mémoire colonnes */
/* ar[i] = chaque élément pointeur height création colonnes width */
/* (int *) conversion type malloc en int */
if (ar[i] == NULL) /* vérification chaque alloc mémoire */
{
while (i > 0) /* boucle de vérification échec malloc */
/* parcourir mémoire alloué */
free(ar[--i]); /* libération mémoire lignes */
free(ar); /* libération mémoire tableau */
return (NULL); /* échec malloc */
}
for (j = 0; j < width; j++)
ar[i][j] = 0; /* initialisation chaque élément tableau à 0 */
}
return (ar);
}
