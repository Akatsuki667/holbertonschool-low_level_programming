#include "lists.h"
/**
 * sum_dlistint - calcul somme des noeuds
 * @head: liste de noeuds à calculer
 * Return: somme des noeuds
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head; /* stockage adresse mémoire */
/* pointeur parcourir liste de noeuds */
int sum = 0; /* stockage calcul data noeuds */
if (head == NULL) /* vérification paramètre valide */
return (-1);
while (current != NULL) /* parcours liste de noeuds */
{
sum += current->n; /* calcul data -> ajout à sum */
current = current->next; /* déplacement noeud suivant */
}
return (sum); /* retourne somme data des noeuds*/
}
