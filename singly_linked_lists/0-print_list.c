#include "lists.h"
/**
 * print_list - affiche la longueur et le contenu d'une string
 * @h: paramètres à afficher
 * Return: nb de noeud de la liste
 */
size_t print_list(const list_t *h)
{
size_t count = 0; /* stockage nb de noeud dans la liste */
while (h != NULL) /* parcours paramètres*/
{
if (h->str == NULL) /* vérification validité paramètres */
printf("[0] (nil)\n"); /* afficher message d'erreur */
printf("[%d] %s\n",h->len, h->str); /* affiche longueur str et contenu */
h = h->next; /* MAJ du pointeur vers prochain noeud */
count++; /* ajout nb de noeud liste h->next */
}
return (count); /* retourne nb de noeud liste */
}
