#include "main.h"
/**
 * leet - Encodes a string into 1337 (leet speak)
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
char *leet_chars = "43071";
/* Corresponding replacements for a, e, o, t, l */
char *normal_chars = "aeotlAEOTL";
/* Characters to be replaced */
int i, j;
/* Loop through each character in the input string */
for (i = 0; str[i] != '\0'; i++)
{
/* Loop through normal_chars to find a match */
for (j = 0; normal_chars[j] != '\0'; j++)
{
if (str[i] == normal_chars[j])
/* Check for a match */
{
str[i] = leet_chars[j];
/* Replace with leet equivalent */
}
}
}
return (str);
/* Return the pointer to the modified string*/
}
