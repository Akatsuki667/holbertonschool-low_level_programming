#include "main.h"
/**
 * flip_bits - Calcule le nombre de bits à retourner pour convertir
 * un nombre en un autre.
 * @n: Le premier nombre.
 * @m: Le deuxième nombre.
 * Return: Le nombre de bits à retourner.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result; /* stockage résultat opération XOR */
unsigned int count = 0; /* compteur nb de bit différent */
xor_result = n ^ m;
/* bit sera 1 si bit correspondant n et m sont différent */
/* si bit n et m correspondant bit = 0 */
/* chaque 1 représente bit basculer */
while (xor_result) /* tant que xor_result n'est pas 0 */
{
count += xor_result & 1; /* bit différent donc incrémentation count */
xor_result >>= 1; /* décale d'un bit vers la droite */
/* permet élimination bit faible déjà examiner -> passer bit suivant */
}
return (count); /* retourne nb total de bit à basculer */
}
