#include "main.h"
/**
 * _strspn - rechercher ensemble de carctère dans une chaîne
 * @s: segment initial
 * @accept: segment contenant même caractère que s
 * Return: total caractère en commun
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
/* Initialise compteur caractère intiaux s et accept */
int j;
while (*s != '\0')
/* parcourt chaque caractère de s tant qu'il est dans accept */
{
int found = 0; /* marqueur si caractère s trouver dans accept */
for (j = 0; accept[j] != '\0'; j++)
/* parcourt caractère accept*/
if (*s == accept[j])
/* si caractère s est dans accept */
{
found = 1; /* marque la correspondance  */
len++; /* incrémente compteur caractère commun */
break; /* stop boucle for pour ce caractère*/
}
if (!found) /* si carcatère de s n'est pas trouver dans accept */
break; /* stop boucle principale */
s++; /* passe au carcatère suivant*/
}
return (len); /* retourne nb total caractère initiaux*/
}
