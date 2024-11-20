#include "variadic_functions.h"
/**
 * print_strings - afficher série de string séparés par un délimiteur
 * @separator: délimiteur donné
 * @n: nb de string qui seront passés comme arguments
 * @...: arguments supplémentaires à traiter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap; /* déclaration variable de type va_list */
unsigned int i; /* index parcourir arguments */
char *s; /* stockage string argument */
if (n == 0) /* vérification validité paramètre */
return; /* retour de fonction */
va_start(ap, n); /* initialisation arguments */
/* indique arguments commence après n */
for (i = 0; i < n; i++) /* parcourir argument variadique */
{
if (separator != NULL && i > 0) /* condition affichage séparateur */
/* i == 0 pas de séparateur va de suite seconde instruction */
printf("%s", separator); /* affichage séparateur après première string */
s = va_arg(ap, char*); /* récupération argument suivant  */
if (s == NULL) /* vérification validité de la string */
printf("(nil)"); /* affichage erreur*/
printf("%s", s); /* affichage pointeur contenant string argument */
}
printf("\n");/* retour à la ligne */
va_end(ap); /* libération ressource ap */
}
