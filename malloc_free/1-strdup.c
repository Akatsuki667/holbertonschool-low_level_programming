#include "main.h"
#include <stdlib.h>
/**
 * _strdup - renvoi pointeur vers allocation dynamique copie string
 * @str: string à copier
 * Return: pointeur à renvoyer
 */
char *_strdup(char *str)
{
char *cp_str; /* pointeur mémoire alloué copie str */
int i; /* index boucle copie */
int len; /* stokera longueur str, déterminer espace mémoire allouer */
if (str == NULL)
return (NULL);
/* vérification str NULL, inutile de dupliquer chaîne NULL*/
for (len = 0; str[len] != '\0'; len++);
/* contient nb caractères sans compter '\0' */
cp_str = malloc((len + 1) * sizeof(char));
/* allocation dynamique mémoire copie str */
/* len + 1 = inclure espace nécessaire pour '\0' */
if (cp_str == NULL)/* vérification échec malloc */
return (NULL);/* échec malloc */
for (i = 0; i < len; i++)
/* boucle copie caractère, parcourir len */
cp_str[i] = str[i];
/* à chaque itération str[i] copie dans cp_str[i] */
cp_str[len] = '\0'; /* ajout caractère NULL */
/* marquer fin de la chaîne */
return (cp_str);
/* retourne pointeur vers copie allouer dynamiquement */
}
