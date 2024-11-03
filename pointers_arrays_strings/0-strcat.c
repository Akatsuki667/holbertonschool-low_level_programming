#include "main.h"
/**
 * *_strcat - description
 * @dest: desription
 * @src: description
 * Return: description
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
/* pointeur début de chaîne de carcatère */
while (*dest != '\0')
dest++;
while (*src != '\0')
{
*dest = *src;
/* affectation caractère pointé par src à la position courante dest */
dest++;
src++;
/* incrémentation pointeurs carcatère suivant */
}
*dest = '\0';
/* marque la fin de la chaîne concaténée */
return (ptr);
/* renvoyer l'adresse de départ de dest */
}
