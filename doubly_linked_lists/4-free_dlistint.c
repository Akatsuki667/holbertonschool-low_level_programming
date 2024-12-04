#include "lists.h"
/**
 * free_dlistint - libération mémoire alloué
 * @head: paramètre à libérer
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *next_node; /* stocker l'adresse du noeud suivant */
if (head == NULL) /* vérification paramètre valide */
return;
while (head != NULL) /* parcours liste de noeud */
{
next_node = head->next; /* assignation adresse noeud suivant */
free(head); /* libération du noeud */
head = next_node;
/* passer au noeud suivant (incrémentation séquentielle) */
}
}
