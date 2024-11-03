#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0; /* Index for traversing the string */
int j;
/* Define the word separators */
char separators[] = " \t\n,;.!?\"(){}";
/* Capitalize the first character if it's a lowercase letter */
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32; /* Convert to uppercase */
}
/* Iterate through the string */
while (str[i] != '\0')
{
/* Check if the current character is a separator */
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i] == separators[j]) /* Found a separator */
{
/* Move to the next character */
i++;
/* If the next character is a lowercase letter, capitalize it */
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32; /* Convert to uppercase */
}
break; /* Exit the inner loop since a separator was found */
}
}
i++; /* Move to the next character */
}
return (str); /* Return the pointer to the modified string */
}
