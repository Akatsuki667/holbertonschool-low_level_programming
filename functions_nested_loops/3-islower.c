#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: The character to check, provided as an integer (ASCII value)
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
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
