#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
int n; /* stockage data noeud */
struct dlistint_s *prev; /* pointeur noeud précédent */
/* premier de la liste = initialisation NULL*/
struct dlistint_s *next; /* pointeur noeud suivant */
/* dernier de la liste = initialisation NULL */
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif
