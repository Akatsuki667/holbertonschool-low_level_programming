#include "main.h"
/**
 * _memset - remplir zone mémoire avec octet donné
 * @s: octet donné
 * @b: caractère à afficher
 * @n: nb de zone mémoire à allouer
 * Return: origin
 */
char *_memset(char *s, char b, unsigned int n)
{
char *origin = s;
/* pointeur copie s dans variable */
/* nécessaire pour retourner adresse de départ */
while (s < origin + n)
/* parcourir n emplacement de mémoire */
/* origin + n = limite supérieur de la zone à remplir */
{
*s = b;
/* remplit chaque emplacement pointé par s avec char b */
s++;
/* incrémente le pointeur s plour qu'il pointe vers l'emplacement suivant */
}
return (origin);
}
