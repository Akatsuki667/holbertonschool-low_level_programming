#include "lists.h"
/**
 * free_dlistint - libération mémoire alloué
 * @head: paramètre à libérer
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp; /* stocker l'adresse du noeud suivant */
if (head == NULL) /* vérifcation paramètre valide */
return;
while (head != NULL)
{
temp = head->next; /* stockage adresse noeud suivant */
free(head); /* libération mémoire alloué noeud */
head = temp;
/* passe au caractère suivant (incrémentation séquentielle) */
}
}
