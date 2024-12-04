#include "lists.h"
/**
 * get_dnodeint_at_index - Récupère le nœud à l'index donné dans une liste
 *                         doublement chaînée.
 * @head: Pointeur vers le premier nœud de la liste.
 * @index: Index du nœud à récupérer, à partir de 0.
 * Return: Pointeur vers le nœud correspondant à l'index,
 *         ou NULL si le nœud n'existe pas.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head; /* stockage adresse mémoire head */
/* pointeur parcours liste de noeud */
unsigned int current_index = 0; /* index comparaison */
/* suivre postion actuelle */
if (head == NULL) /* vérification paramètre valide */
return (NULL); /*  */
while (current != NULL) /* parcours liste de noeuds */
{
if (current_index == index) /* vérification correspondance */
return (current); /* retourne noeud correspondant */
current = current->next; /* déplacement noeud suivant */
current_index++; /* incrémentation index */
}
return (head);
}
