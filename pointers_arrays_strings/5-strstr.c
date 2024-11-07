#include "main.h"
#include <stddef.h> /* permet uttilisation macro(define) NULL */
/**
 * _strstr - rechercher une chaîne de caractère occurente
 * @haystack: chaîne où l'on cherche
 * @needle: chaîne où l'on cherche l'occurence
 * Return: poiteur vers première occurence de needle
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0') /* si vide */
return (haystack); /* retourne NULL */
while (*haystack != '\0')
/* parcourt haystack jusqu'au caractère NULL */
{
char *h = haystack;
char *n = needle;
while (*h != '\0' && *n != '\0' && *h == *n)
/* tant que *h / *n différent '\0' et *h / *n caractère correspondant */
{
h++;
n++;
/* incrémentation carcatère suivant */
}
if (*n == '\0')
/* si parcout de tout needle, signifie que needle trouvé dans haystack */
return (haystack);
/* retour position actuelle */
haystack++;
/* incrémentation première boucle while, passé au caractère suivant */
}
return (NULL);
/* si needle vide retourne NULL */
}
