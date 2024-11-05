#include "main.h"
#include <stddef.h>
/**
 * _strstr - rechercher une chaîne de caractère occurente
 * @haystack: chaîne où l'on cherche
 * @needle: chaîne où l'on cherche l'occurence
 * Return: poiteur vers première occurence de needle
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0') /* si vide */
return (NULL); /* retourne NULL */
if (*haystack == '\0') /* si vide */
return (NULL); /* retourne NULL */
/* vérification si needle / haystack sont vide */
while (*haystack != '\0')
/* parcourt haystack jusqu'au caractère NULL */
{
haystack++; /* incrémentation d'un caractère */
if (*haystack == *needle)
/* si caractère corresponde exécution bloc de code suivant*/
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
/* si parcout de tout needle, signifie que needle trouvé dans haystack*/
return (haystack);
/* retour position actuelle */
}
}
return (NULL);
/* si needle vide retourne NULL */
}
