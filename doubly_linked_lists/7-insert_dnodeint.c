#include "lists.h"
/**
 * dlistint_len - calculer nb noeuds
 * @h: pointeur adressse mémoire premier noeud
 * Return: nb de noeuds
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
/* pointeur vers struct */
/* initialisation à l'adresse mémoire premier noeud */
size_t count = 0; /* compteur nb de noeuds */
while (current != NULL)
{
count++; /* ajout noeud compteur */
current = current->next;
/* assignation adresse mémoire suivante */
}
return (count);
}
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
if (idx > dlistint_len(*h) - 1) /* vérification validité index */
return (NULL);
if (idx == dlistint_len(*h) - 1) /* vérification index */
return (add_dnodeint_end(h, n)); /* appel fonction ajout à la fin */
/* insertion noeuds au milieu de liste */
new_node = malloc(sizeof(dlistint_t)); /* allocation mémoire */
if (new_node == NULL) /* vérification validité allocation */
return (NULL);
while (current_node != NULL && count_idx != idx - 1)
/* parcours liste de noeuds */
{
current_node = current_node->next; /* déplacement noeuds suivant */
count_idx++; /* incrémentation index */
}
new_node->n = n; /* assignation data par paramètres n */
new_node->prev = current_node; /* assignation pointeur prev vers temp */
new_node->next = current_node->next;
/* assignation new_current pointe sur l'ancien suivant */
current_node->next->prev = new_node;
/* le prev noeuds suivant current devient le new */
current_node->next = new_node; /* next current devient le new */
return (new_node);
}

