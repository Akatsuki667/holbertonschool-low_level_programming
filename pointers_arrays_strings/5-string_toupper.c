#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to be converted
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
char *ptr = str;
/* initialisation avec l'adresse de la chaîne str */
while (*str)
{
if (*str >= 'a' && *str <= 'z')
/* condition vérifciation carcatère actuel est minuscule */
{
*str -= 32;
/* convertit la caractère minuscule en majuscule */
/* soustrait 32 à la  valeur ASCII = différence lettre minuscule/majuscule */
}
str++;
}
return (ptr);
}
