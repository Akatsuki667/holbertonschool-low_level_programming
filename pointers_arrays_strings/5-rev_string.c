#include "main.h"
/**
 * rev_string - description
 * @s: description
 * Return: description
 */
void rev_string(char *s)
{
int left = 0;
/* représente index du premier carcatère */
int right = 0;
/* représente indes du dernier caractère */
while (s[right] != '\0')
{
right++;
}
/* boucle atteindre le caractère NULL */
right--;
/* pointe vers le dernier caractère et non caractère NULL */
while (left < right)
/* boucle pour inverser les caractères */
{
char temp = s[left];
/* varibale temporaire pour valeur initial de left */
s[left] = s[right];
/* affectation caractère left postion right */
s[right] = temp;
/* affecte right caractère en récupérant la valeur intiale de left */
left++;
/* incrémenter pour avancer vers le centre */
right--;
/* décrémenter pour avancer vers le centre */
}
}
