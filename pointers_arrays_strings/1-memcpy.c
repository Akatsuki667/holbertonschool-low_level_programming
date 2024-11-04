#include "main.h"
/**
 * _memcpy - copier zone mémoire
 * @dest: destination zone mémoire copié
 * @src: source zone mémoire que l'on veut copier
 * @n: nb zone mémoire que l'on veut copier
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
/* référence dest pour pouvoir le retourner */
while (n > 0)
{
*dest = *src;
/* copie de chaque zone mémoire de src */
dest++;
src++;
/* déplacent les pointeurs vers le prochain octet de mémoire */
n--;
/* décrémentation compteur n */
/* n atteint 0 tous les octets sont copiés */
}
return (dest_ptr);
}
