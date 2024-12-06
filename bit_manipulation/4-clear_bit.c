#include "main.h"
/**
 * clear_bit - mettre un bit spécifique à 0
 * @n: pointeur vers le nb à modifier
 * @index: la position à modifier
 * Return: 1 si succès ou -1 si erreur
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63) /* vérification index valide */
return (-1);
*n = *n & (1UL << index); /* bit position index forcé à 0 */
/* (~(1UL << index)) -> création masque avec bit ciblé à 1 */
/* (~(1UL << index)) inverse tous les bits */
return (1);
}
