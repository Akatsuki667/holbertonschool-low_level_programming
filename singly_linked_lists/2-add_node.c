#include "lists.h"
/**
 * add_node - ajout nouveau noeuds au début de la liste chaînée
 * @head: double pointeur vers noeud("tête") liste chaînée
 * @str: pointeur vers chaîne de caractère que le noeud doit stocker
 * Return: adresse nouvelle élément ou NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new; /* création node */
/* référencer nouveau noeud */
new = malloc(sizeof(list_t)); /* allocation mémoire node */
if (new == NULL) /* vérification allocation */
return (NULL);
new->str = strdup(str);
/* allocation mémoire copie str */
/* retour pointeur copie */
new->next = *head;
/* champ du nouveau noeud qui pointe vers le premier noeud actuel */
/* *head->pointe vers tête actuelle de la liste */
/* cette ligne relie le nouveau noeud à l'ancien noeud */
*head = new; /* MAJ pointeur vers prochain noeud */
return (new);
}
