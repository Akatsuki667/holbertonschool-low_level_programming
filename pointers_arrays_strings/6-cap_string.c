#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
/* index parcourir caractère de la chaîne */
char separators[] = " \t\n,;.!?\"(){}";
/* array contenant caractère séparateurs mots */
if (str[i] >= 'a' && str[i] <= 'z')
/* condition vérifiant si str[i] est une minuscule */
{
str[i] -= 32;
while (str[i] != '\0')
{
if (separators[str[i]])
/* condition vérifiant si str[i] est un separators */
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
else
{
i++;
}
return (str);
}
