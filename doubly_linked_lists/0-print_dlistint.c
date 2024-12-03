#include "lists.h"
/**
 * print_dlistint - afficher les éléments liste chaînée double
 * @h: pointeur vers la head de la liste de noeud
 * Return: nb de noeud de la liste
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
/* pointeur parcourir liste de noeuds*/
size_t count = 0; /* compteur nb de noeuds liste */
if (current == NULL) /* vérification liste vide */
return (count); /* retour nb de noeud = à 0 */
while (current != NULL) /* parcours liste */
{
printf("%d\n", current->n);
/* imprime valeur champ n du noeud à chaque itération */
current = current->next; /* déplacement pointeur vers noeud suivant */
count++; /* incrémentation compteur nb de noeuds */
}
return (count); /* retour nb de noeud */
}
