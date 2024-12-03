#include "lists.h"

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
