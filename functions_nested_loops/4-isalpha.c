#include "main.h"
/**
 * _isalpha - checks if a character is lowercase or uppercase
 * @c: The character to check, provided as an integer (ASCII value)
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
