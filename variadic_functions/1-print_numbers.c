#include "variadic_functions.h"
/**
 * print_numbers - afficher série de nb entiers séparés par un délimiteur
 * @separator: délimiteur donné
 * @n: nb entiers qui seront passés comme arguments
 * @...: arguments supplémentaires à traiter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list(ap); /* déclaration variable de type va_list */
unsigned int i; /* index parcourir arguments */
va_start(ap, n); /* initialisation arguments */
/* indique les arguments commence après n */
for (i = 0; i < n; i++) /* parcourir arguments variadiques */
{
if (separator != NULL && i > 0) /* condition affichage séparateur */
/* i == 0 pas de séparateur va de suite seconde instruction */
printf("%s", separator); /* affichage séparateur après le premier nb*/
printf("%d", va_arg(ap, unsigned int)); /* affichage nb */
}
printf("\n"); /* retour à la ligne */
va_end(ap);/* libération ressources ap */
}
