#include "variadic_functions.h"
/**
 * sum_them_all - calcul somme nb arbitraire d'entiers non signés
 * @n: entiers non signé indiquant nb d'arguments à traiter
 * @...: arguments variadiques contenant les entiers
 * Return: retourne la somme des arguments
 */
int sum_them_all(const unsigned int n, ...)
{
va_list (ap); /* déclaration variable type va_list*/
/* accès aux arguments variadiques */
unsigned int i; /* index parcourir arguments */
unsigned int sum; /* stockage somme des entiers */
va_start (ap, n); /* initialisation arguments ap */
/* indique que les arguments commence après n */
sum = 0; /* initialisation sum pour l'accumulation */
for (i = 0; i < n; i++) /* parcourir nb arguments variadique */
sum += va_arg (ap, unsigned int);
/* va_arg extrait argument suivant -> ajouté à sum */
va_end (ap); /* libération ressources utilisé par ap */
return (sum);
}
