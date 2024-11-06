#include "main.h"
/**
 * _strlen_recursion - renvoyer longueur string
 * @s: string que l'on doit calculer
 * Return: retourne la longueur de la string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
/* vérification caracrtère actuel n'est pas NULL */
return (0);
/* Si caractère NULL, retourne 0*/
else
return ((1) + _strlen_recursion(s + 1));
/* appel récursif fonction */
/* return 1 = ajoute 1 à la fonction */
/* s+1 = déplace le pointeur */
}
