#include "main.h"
/**
 * factorial - retourne factorisation nb
 * @n: nb à factoriser
 * Return: retourne factorielle de n positif,-1 de n négatif
 */
int factorial(int n)
{
if (n == 0)
/* condition de sortie */
/* vérification n égale 0 */
return (1);
/* si oui retourne 1 */
if (n < 0)
/* condition de sortie */
/* vérification nb négatif */
return (-1);
/* si oui retourne -1 */
/* return (-1) utilisé pour signaler une erreur ou valeur non défini */
return (n * factorial(n - 1));
/* appel récursif faisant calcul principal de la factoriel */
/* si n positif, retourne le produit de n et de factoriel(n - 1) */
/* récursion continue jusqu'à ce que n atteigne 0 -> retourne 1 */
}
