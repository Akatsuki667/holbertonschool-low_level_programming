#include "main.h"
/**
 * _pow_recursion - retourne la valeur x puissance y
 * @x: valeur à élever
 * @y: valeur qui élève x
 * Return: retourne puissance de x par y
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
/* condition de sortie */
/* vérification exposant 0 */
return (1);
/* tout nb élevé puissance 0 retourne 1 */
if (y < 0)
/* condition de sortie */
/* vérification nb négatif */
return (-1);
/* return (-1) utilisé pour signaler une erreur ou valeur non défini */
return (x * _pow_recursion(x, y - 1));
/* appel récursif faisant calcul principal de la puissance */
/* si y positif, retourne produit de x * résultat _pow_recursion(x,y-1) */
/* récursion continue jusqu'à ce que n atteigne 0 -> retourne 1 */
}
