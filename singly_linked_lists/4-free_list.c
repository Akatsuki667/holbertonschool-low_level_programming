#include "lists.h"
/**
 * free_list - libération mémoire alloué
 * @head: paramètres à libérer
 */
void free_list(list_t *head)
{
list_t *temp; /* stocker l'adresse du noeud suivant */
if (head == NULL) /* vérification paramètres valide */
return;
while (head != NULL) /* parcours liste noeuds */
{
temp = head->next; /* stockage adressse noeud suivant */
free(head->str); /* libération chaîne de caractère */
free(head); /* libération mémoire alloué pour le noeud */
head = temp; /* passe au noeud suivant */
}
}
