#include "main.h"
/**
 * swap_int - description
 * @a: description
 * @b: description
 */
void swap_int(int *a, int *b)
{
int x = *a;
/* variable temporaire = sauvegarde valeur intiale avant modification */
*a = *b;
/* affecte valeur pointée par b à l'emplacemnt pointée par a */
*b = x;
}
