#include "main.h"
/**
 * get_bit - extraire le bit de la position indexé
 * @n: nb binaire
 * @index: postion bit à extraire
 * Return: valeur du bit indexé
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63) /* vérification index valide */
return (-1);
n = n >> index;
/* assignation décalage droite à la position index */
return (n & 1); /* isolement bit ciblé aveec opérateur AND */
}
