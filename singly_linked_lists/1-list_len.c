#include "lists.h"
/**
 * list_len - afficher nb de noeuds
 * @h: noeuds à afficher
 * Return: nb de noeuds
 */
size_t list_len(const list_t *h)
{
const list_t *current = h; /* pointeur permettant l'itération */
size_t count = 0; /* stockage nb de noeuds liste */
if (current == NULL) /* vérification paramètres valide */
return (-1);
while (current != NULL) /* parcours paramètres */
{
current = current->next;
count++;
}
return (count);
}
