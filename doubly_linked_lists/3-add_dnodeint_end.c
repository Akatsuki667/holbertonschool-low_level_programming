#include "lists.h"
/**
 * add_dnodeint_end - ajout noeud dernière position
 * @head: double pointeur vers adresse premier noeud
 * @n: données du nouveau noeud
 * Return: adresse nouvel élément ou NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = *head;
/* pointeur vers adresse mémoire struct temp */
dlistint_t *new;
/* pointeur création nouveau noeud */
if (head == NULL) /* vérification paramètre valide */
return (NULL);
new = malloc(sizeof(dlistint_t));
/* allocation mémoire création de noeud */
if (new == NULL) /* vérification allocation valide */
return (NULL);
new->n = n; /* assignation donnée à paramètre n */
new->next = NULL;
/* assignation pointeur suivant vers NULL */
if (temp == NULL)
/* vérification liste vide */
{
*head = new;
/* si oui, assignation dernier élément créer devient le premier */
return (new);
}
while (temp->next != NULL) /* parcours liste de noeuds */
temp = temp->next;/* déplacement dernier élément */
temp->next = new;
/* assignation nouveau noeuds au dernier élément */
new->prev = temp;
/* assignation pointeur précédent au dernier temp lors du parcours liste */
return (new);
}
