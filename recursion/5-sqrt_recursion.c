#include "main.h"
/**
 * sqrt_clc - fonction auxiliare calcul racine carré
 * @n: valeur pour lequel le calcul est implémenter
 * @r: candidat racine carré, incrémenter à chaque appel
 * Return: retourne racine carré ou -1
 */
int sqrt_clc(int n, int r)
/* fonction auxiliare pour calculer la racine carré de n */
/* n = nb dont on cherche la racine carré */
/* r = une tentative pour racine carré qui augmente à chaque appel */
{
if ((r * r) == n) /* condition de sortie */
/* si r racine carré de n */
return (r);
/* retourne valeur souhaité */
if ((r * r) > n) /* condition de sortie */
/* si r supérieur à n */
return (-1);
/* si r trop grand, son carré dépasse n -> n pas de racine carré entière */
/* return (-1) utilisé pour signaler une erreur ou valeur non défini */
return (sqrt_clc(n, r + 1));
/* si les une des 2 conditions pas rempli -> appel récursif avec r+1*/
/* continue jusqu'a ce que une des deux condition rempli */
}
/**
 * _sqrt_recursion - calcule racine carré entière d'un nb
 * @n: nb dont on cherche la racine carré
 * Return: retourne racine carré ou -1
 */
int _sqrt_recursion(int n) /* fonction principal pour calcul racine carré */
{
if (n < 0) /* condition de sortie */
/* vérification n est négatif */
return (-1);
/* return (-1) utilisé pour signaler une erreur ou valeur non défini */
return (sqrt_clc(n, 0));
/* appel sqrt_clc, r = 0 signifie départ de l'incrémentation */
}
