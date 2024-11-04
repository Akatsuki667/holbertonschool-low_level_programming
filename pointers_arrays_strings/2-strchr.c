#include "main.h"
/**
 * _strchr - rechercher un carctère dans une chaîne
 * @s: paramètre permettant d'obtenir une string
 * @c: paramètre carcatère rechercher
 * Return: s_origin
 */
char *_strchr(char *s, char c)
{
char *s_origin = s;
/* initialisation valeur s, copie pointeur s, garder sa valeur initiaile*/
while (*s != '\0')
{
if (*s == c)
return (s);
/* Retourne l'adresse de la première occurrence de c */
s++;
}
if (c == '\0')
/* Si c est le caractère nul */
return (s);
/* retourne un pointeur vers '\0' en fin de chaîne */
return (s_origin);
/* Si c n'est pas trouvé, retourne s_origin */
}
