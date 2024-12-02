#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str; /* donnée du noeud */
/* pointeur vers chaîne de caractère */
/* stockage chaîne de texte */
unsigned int len; /* stockage longueur chaîne */
struct list_s *next; /* pointeur vers noeud suivant */
} list_t;

size_t print_list(const list_t *h);

#endif
