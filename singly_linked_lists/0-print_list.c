#include "lists.h"
/**
 * print_list - affiche la longueur et le contenu d'une string
 * @h: paramètres à afficher
 * Return: nb de noeud de la liste
 */
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0; /* stockage nb de noeud dans la liste */
if (current == NULL) /* vérification paramètres */
return (-1);
while (current != NULL) /* parcours paramètres */
{
if (current->str == NULL) /* vérification validité paramètres */
printf("[0] (nil)\n"); /* afficher message d'erreur */
else
printf("[%d] %s\n",current->len, current->str); /* affiche longueur str et contenu */
current = current->next; /* MAJ du pointeur vers prochain noeud */
count++; /* ajout nb de noeud liste h->next */
}
return (count); /* retourne nb de noeud liste */
}
