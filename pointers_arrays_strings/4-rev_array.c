#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to reverse
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
int temp;
/* varibale temporaire */
int i, j;
/* index i = commencera début du tableau */
/* index j = commencera fin du tableau */
for (i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[i];
/* stockage temporaire valeur de a[i] */
a[i] = a[j];
/* valeur a[j] copiée dans a[i] */
a[j] = temp;
/* valeur initiale temp copié dans a[j] */
/* effectue un échange entre les élements i et j */
}
}
