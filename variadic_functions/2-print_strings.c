#include "variadic_functions.h"
/**
 * print_strings - afficher série de string séparés par un délimiteur
 * @separator: délimiteur donné
 * @n: nb de string qui seront passés comme arguments
 * @...: arguments supplémentaires à traiter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
/* déclare variable i pr tt les args variadiques for */
va_list args;
/* gere les arguments passés à la fonction*/
va_start(args, n);
/*initialisation variable args pour traiter les args */
/* elle prend en arg le dernier para (n)*/
for (i = 0; i < n; i++)
/* boucle*/
{
const char *str = va_arg(args, const char *);
/*extrait prochain elt de la liste */
/* arg de type const char * (chaine de caracteres*/
/* resultat stocké dans str*/
if (str == NULL)
/* si arg null = nil */
{
printf("(nil)");
/* si str null nil à la place */
}
else
{
printf("%s", str);
/* si str est valide alors affiche chaine de caracteres*/
}
if (separator != NULL && i < n - 1)
/* verifie si separator pas NULL*/
/* verifie si i pas dernier indice (pas sep après dernier arg)*/
/* si deux condi vraies on affiche le sep*/
{
printf("%s", separator);
/*si c'est vrai on affiche le sep + nouvelle ligne à la fin de sortie*/
}
}
printf("\n");
va_end(args);
}
