#include "lists.h"
/**
 * delete_dnodeint_at_index - suppression noeud index
 * @head: liste de noeuds
 * @index: index noeud à supprimer
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
/* stocker adresse mémoire h, repère avant insertion*/
/* garder valeur initial */
unsigned int idx = 0; /* compteur index liste de noeuds */
if (*head == NULL) /* vérification liste vide */
return (-1);
if (index == 0) /* vérification suppression premier noeud */
{
*head = current->next; /* déplacement noeuds suivant */
if (*head != NULL) /* vérification que ce ne soit pas le dernier noeud */
(*head)->prev = NULL; /* deviens premeir noeuds donc prev égal NULL */
free(current); /* libération ancien noeuds */
return (1);
}
while (current != NULL && idx < index)
/* parcours liste noeuds pour correspondance */
{
current = current->next; /* déplacement noeuds suivant */
idx++; /* incrémentation idx */
}
if (current == NULL) /* vérification index valide */
return (-1);
if (current->prev != NULL) /* vérification noeud précédent existe */
current->prev->next = current->next;
/* next de current prev devient le next noeud suivant */
if (current->next != NULL) /* vérification noeud suivant existe */
current->next->prev = current->prev;
/* le prev du crrent next devient le prev noeud précédent */
free(current); /* libération de mémoire */
return (1);
}
