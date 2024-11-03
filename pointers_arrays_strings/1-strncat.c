#include "main.h"
/**
 * _strncat - Concatenates two strings up to n bytes from src
 * @dest: Destination string to which src will be appended
 * @src: Source string to be appended to dest
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;
/* pointeur garder l'adresse de départ dest */
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
/* condtion : carctère NULL atteint ET n atteigne 0  */
{
*dest = *src;
/* affectation caractère pointé par src à la position actuelle de dest */
dest++;
src++;
n--;
}
*dest = '\0';
return (dest_start);
}
