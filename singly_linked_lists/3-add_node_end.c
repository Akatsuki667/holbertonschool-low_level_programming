#include "lists.h"
/**
 * add_node_end - création noeud
 * @head: poin teur vers pointeur du premier noeud
 * @str: chaîne de caractère stocker dans le nouveau noeud
 * Return: adresse nouveau noeud, ou NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *last = *head;
/* pointeur vers premier noeud de la liste */
list_t *new; /* pointeur création nouveau noeud */
new = malloc(sizeof(list_t)); /* allocation mémoire */
if (new == NULL) /* vérification allocation */
return (NULL);
new->str = strdup(str); /* allocation mémoire copie str */
new->next = NULL; /* initialisation champ nouveau noeud */
if (*head == NULL) /* vérification liste valide */
{
*head = new; /* nouveau devient premier noeud */
return (new); /* retour fonction npuveau noeud */
}
while (last->next != NULL) /* parcours liste noeuds */
last = last->next;
/* assignation adresse noeud suivant */
last->next = new;
/* modifcation dernier noeud pointant vers nouveau noeud */
return (new);
}
