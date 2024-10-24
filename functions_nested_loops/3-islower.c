#include "main.h"
/**
 * _islower - description
 * Return: 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
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
