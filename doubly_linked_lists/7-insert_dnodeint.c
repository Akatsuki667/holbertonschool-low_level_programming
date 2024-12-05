#include "lists.h"
/**
 * insert_dnodeint_at_index - insérer un noeud dans la liste via index
 * @h: liste noeuds
 * @idx: emplacement où l'on ajoute le noeud
 * @n: data à ajouter au noeud
 * Return: adresse nouveau noeud ou NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current_node = *h;
/* stocker adresse mémoire h, repère avant insertion*/
/* garder valeur initial */
dlistint_t *new_node; /* pointeur nouveau noeud */
unsigned int count_idx = 0; /* compteur index liste de noeuds */
if (h == NULL) /* vérification paramètre valide */
return (NULL);
if (idx == 0) /* vérification index */
return (add_dnodeint(h, n)); /* appel fonction ajout au début */
/* insertion noeuds au milieu de liste */
while (current_node != NULL && count_idx != idx - 1)
/* parcours liste de noeuds */
{
current_node = current_node->next; /* déplacement noeuds suivant */
count_idx++; /* incrémentation index */
}
if (current_node == NULL) /* vérification validité liste */
return (NULL);
if (current_node == NULL && count_idx == idx - 1)
return (add_dnodeint_end(h, n)); /* appel fonction ajout à la fin */
new_node = malloc(sizeof(dlistint_t)); /* allocation mémoire */
if (new_node == NULL) /* vérification validité allocation */
return (NULL);
new_node->n = n; /* assignation data par paramètres n */
new_node->prev = current_node; /* assignation pointeur prev vers temp */
new_node->next = current_node->next;
if (current_node->next != NULL)
/* assignation new_current pointe sur l'ancien suivant */
current_node->next->prev = new_node;
/* le prev noeuds suivant current devient le new */
current_node->next = new_node; /* next current devient le new */
return (new_node);
}

