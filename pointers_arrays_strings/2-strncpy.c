#include "main.h"
/**
 * _strncpy - Copies a string up to n bytes
 * @dest: Destination buffer where the string will be copied
 * @src: Source string to copy
 * @n: Maximum number of bytes to copy from src
 *
 * Return: Pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
/* index boucle for */
for (i = 0; i < n && src[i] != '\0'; i++)
/* copie caractère tant que i inférieur à n */
/* ET src[i] n'est pas le caractère NULL */
dest[i] = src[i];
/* itération copie le caractère postion src[i] vers position dest[i] */
for (; i < n; i++)
/* ajour caracère NULL si src contient moins de n caractère */
dest[i] = '\0';
/* dans chaque itération dest[i] insère caractère NULL*/
return (dest);
}
