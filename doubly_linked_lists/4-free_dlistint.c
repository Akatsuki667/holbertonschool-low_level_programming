#include "lists.h"
/**
 * free_dlistint - libération mémoire alloué
 * @head: paramètre à libérer
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *next_node; /* stocker l'adresse du noeud suivant */
dlistint_t *current = head;
/* pointeur vers struct */
/*-> permet itération pour ne pas perdre valeur de head */
if (head == NULL) /* vérification paramètre valide */
return;
while (current != NULL) /* parcours liste de noeud */
next_node = current->next; /* assignation adresse noeud suivant */
free(current); /* libération du noeud */
current = next_node;
/* passer au noeud suivant (incrémentation séquentielle) */
}
