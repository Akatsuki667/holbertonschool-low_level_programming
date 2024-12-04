#include "lists.h"
/**
 * sum_dlistint - calcul somme des noeuds
 * @head: liste de noeuds à calculer
 * Return: somme des noeuds
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0; /* stockage calcul data noeuds */
if (head == NULL) /* vérification paramètre valide */
return (0);
while (head != NULL) /* parcours liste de noeuds */
{
sum += head->n; /* calcul data -> ajout à sum */
head = head->next; /* déplacement noeud suivant */
}
return (sum); /* retourne somme data des noeuds*/
}
