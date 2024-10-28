#include "main.h"
/**
 * _isdigit - description
 * @c: description
 * Return: 1 for digit 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
/* condition vérifiant que c est un chiffre */
/* 48/57 : valeurs ASCII chiffres */
{
return (1);
/* si la condition est vrai elle retourne 1 */
}
else
{
return (0);
/* sinon elle retorune 0 */
}
}
