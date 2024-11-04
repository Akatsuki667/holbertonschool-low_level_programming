#include "main.h"
/**
 * *_memset - remplir zone mémoire avec octet donné
 * @s: octet donné
 * @b: caractère à afficher
 * @n: nb de zone mémoire à allouer
 */
char *_memset(char *s, char b, unsigned int n)
{
char *origin = s;
while (s < origin + n)
{
*s = b;
s++;
}
return (origin);
}
