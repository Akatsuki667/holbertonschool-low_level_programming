#include "main.h"
#include <stdlib.h>
/**
 * create_array - création tableau et alocation mémoire tableau
 * @size: taille du tableau
 * @c: nb de caractère
 * Return: le tableau
 */
char *create_array(unsigned int size, char c)
{
char *array;
/* pointeur stockera adresse mémoire bloc alloué */
unsigned int i;
/* index boucle for */
if (size == 0)
return (NULL);
/* vérification size, évite d'allouer de la mémoire inutilement */
array = (char*)malloc(size * sizeof(char));
/* allocation mémoire de taille size et de type char*/
if (array == NULL)
return (NULL);
/* vérification allocation mémoire n'a pas échoué */
for (i = 0; i < size; i++)
/* parcourir chaque élément de array */
array[i] = c;
/* remplir place alloué avec c*/
return (array);
/* retourne pointeur tableau alloué et rempli */
}
