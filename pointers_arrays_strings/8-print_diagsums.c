#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of two diagonals
* @a: pointers
* @size: pointers 2
* Return: point entre diagonal
*/
void print_diagsums(int *a, int size)
{
/* Variables pour stocker les sommes des diagonales */
int sum_diag1 = 0;
int sum_diag2 = 0;
int i;
/* Parcourir les lignes de la matrice (de 0 à size-1) */
for (i = 0; i < size; i++)
{
/* Diagonale principale (éléments a[i * size + i]) */
sum_diag1 += a[i * size + i];
/* Diagonale secondaire (éléments a[i * size + (size - i - 1)]) */
sum_diag2 += a[i * size + (size - i - 1)];
}
/* Afficher les sommes des diagonales */
printf("%d, %d\n", sum_diag1, sum_diag2);
}
