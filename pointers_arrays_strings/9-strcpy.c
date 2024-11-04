#include "main.h"
/**
 * *_strcpy - copie d'une src
 * @dest: paramètre recevant la copie
 * @src: paramètre qui va être copié
 * Return: résultat paramètre de la copie
 */
char *_strcpy(char *dest, char *src)
/* *_strcpy : renvoi un tableau  */
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
/* ajout carcatère NULL marquer fin de la chaîne copié */
return (dest);
/* retourne l'adresse de la chaîne */
}
