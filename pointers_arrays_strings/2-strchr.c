#include "main.h"
/**
 * _strchr - rechercher un carctère dans une chaîne
 * @s: paramètre permettant d'obtenir une string
 * @c: paramètre carcatère rechercher
 * Return: pointeur
 */
char *_strchr(char *s, char c)
{
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
return ((char *)'\0');
/* Si c n'est pas trouvé, retourne caractère NULL */
/* (char *)'\0' = permet la transformation caractère NULL en pointeur */
}
