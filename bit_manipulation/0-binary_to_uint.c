#include "main.h"
/**
 * binary_to_uint - Convertit un nombre binaire en entier non signé.
 * @b: Pointeur vers une chaîne contenant '0' et '1'.
 * Return: Le nombre converti, ou 0 si la chaîne est invalide.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0; /* stockage conversion nb binaire */
int i; /* index parcourir b */
if (b == NULL) /* vérification paramètre valide */
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
/* vérification chaque caractère de b soit 0 ou 1 */
return (0);
n = (n << 1) | (b[i] - '0'); /* conversion binaire vers entier */
/* n<<1 = décalage gauche position bit, revient à multiplier n par 2 */
/* | -> ajout nouveau bit fin de n */
/* b[i] - '0' -> conversions caractère binaires */
}
return (n);
}
