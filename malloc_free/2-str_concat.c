#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concaténation string
 * @s1: string à concaténer
 * @s2: string à concaténer
 * Return: poiteur concaténation
 */
char *str_concat(char *s1, char *s2)
{
char *s_cnct; /* pointeur allocation mémoire concaténation */
int i, j; /* index boucle concaténation */
int len_i = 0, len_j = 0; /* stockage longueur s1, s2 */
if (s1 == NULL)
s1 = ""; /* considéré comme chaîne vide */
if (s2 == NULL)
s2 = ""; /* considéré comme chaîne vide */
while (s1[len_i] != '\0')
len_i++;
while (s2[len_j] != '\0')
len_j++;
/* boucles while, calcul longueur string */
s_cnct = malloc((len_i + len_j + 1) * sizeof(char));
/*  allocation mémoire concaténation */
/* len_i/j + 1 = inclure espace pour '\0' */
if (s_cnct == NULL)
return (NULL);
/* vérification échec malloc */
for (i = 0; i < len_i; i++)
s_cnct[i] = s1[i];
/* copie caractère s1 dans s_cnct */
for (j = 0; j < len_j; j++)
s_cnct[i + j] = s2[j];
/* copie caractère s2 dans s_cnct */
s_cnct[i + j] = '\0';
/* ajout caractère NULL -> fin de la chaîne */
return (s_cnct);
}
