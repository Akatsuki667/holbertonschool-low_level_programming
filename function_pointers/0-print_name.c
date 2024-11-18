#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - imprimer un nom à l'aide d'un pointeur de fonction
 * @name: nom à imprimer
 * @f: pointeur de fonction qui va imprimer le nom
 */
void print_name(char *name, void (*f)(char *))
/* print_name = délègue impression nom à la fonction pointé par f */
/* name = pointeur vers chaîne de carctère (nom à imprimer) */
/* f = pointeur de fonction, parmaètre char, type de retour void */
{
if (name == NULL || f == NULL)
/* condition vérification validité paramètres */
return;
/* Si invalide retour de fonction */
f(name);
/* Appel focntion pour print l'argument donné */
}
