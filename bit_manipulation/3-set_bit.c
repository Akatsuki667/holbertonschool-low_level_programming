#include "main.h"
/**
 * set_bit - mettre un bit spécifique à 1
 * @n: pointeur vers le nb à modifier
 * @index: la position à modifier
 * Return: 1 si succès ou -1 si erreur
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63) /* vérification index valide */
return (-1);
*n = *n | (1UL << index); /* création masque avec bit ciblé à 1 */
/* 1UL -> contient bit le moins significatif (1) */
/* << index -> décale bit à gauche de index position */
/* Opération OU -> fusion masque et valeur actuelle *n */
return (1);
}
