#include "main.h"
/*
 * main - description
 * _islower - description
 * Return: 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
/* Condition vérifie si la valeur de c est comprise entre 97 et 122 (codes ASCII minuscules) */
{
return (1);
/* lowercase character */
}
else
{
return (0);
/* not a lowercase character */
}
}
