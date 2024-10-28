#include "main.h"
/**
 * _isupper - description
 * @c: description
 * Return: 1 for uppercase 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
/* condition vérifiant que c une majsucule */
/* 65/90 : valeur ASCII lettre majuscule */
{
return (1);
/* si la condition est vrai elle retourne 1 */
}
else
{
return (0);
/* sinon elle retourne 0 */
}
}
