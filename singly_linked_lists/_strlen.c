#include "lists.h"
/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne de caractères
 * Return: La longueur de la chaîne
 */
int _strlen(const char *s)
{
int len = 0;
while (*s != '\0')
/* Boucle jusqu'à la fin de la chaîne */
/* != : différent de */
{
len++;
/* Incrémente la longueur */
s++;
/* Passe au caractère suivant */
}
return (len);
/* Retourne la longueur totale */
}
