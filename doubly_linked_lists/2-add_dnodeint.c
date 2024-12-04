#include "lists.h"
/**
 * add_dnodeint - ajouter un noeud
 * @head: double pointeur vers adresse premier noeud
 * @n: données du nouveau noeud
 * Return: adresse nouvel élément ou NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;
/* stockage adresse allocation mémoire */
dlistint_t *ptr;
/* stockage adresse mémoire head */
/* ne pas perdre adresse mémoire initial */
ptr = *head; /* assignation adresse mémoire */
temp = malloc(sizeof(dlistint_t));
/* allocation mémoire noeuds */
if (temp == NULL) /* vérification allocation valide */
return (NULL);
if (ptr != NULL) /* vérification liste non vide */
ptr->prev = temp; /* assignation adresse mémoire */
temp->n = n; /* assignation champ n paramètre n */
temp->prev = NULL;
/* assignation pointeur car première élément */
temp->next = *head;
/* assignation pointeur suivant vers adresse mémoire head */
/* le premier élément devient le second */
*head = temp;
/* assignation adresse mémoire premier élément à head */
return (temp);
}
