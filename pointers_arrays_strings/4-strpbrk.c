#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - recherche première occurence dans la chaîne s
 * @s: chaîne dans laquelle on effectue la recherche
 * @accept: chaîne contenant l'ensemble des caractères à chercher
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0') /* parcourt chaque caractère */
{
char *a = accept;
/* initialisation pointeur pour parcourir caractère */
while (*a != '\0')
{
if (*s == *a) /* Si caractère de s est dans accept */
return (s); /* retourne un pointeur vers ce caractère dans s */
a++; /* Passe au caractère suivant  de accept*/
}
s++; /* Passe au caractère suivant de s */
}
return (NULL); /* Si aucun carectère de s trouver dans accept retourne NULL */
}
