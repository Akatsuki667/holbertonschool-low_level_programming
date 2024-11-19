#include "3-calc.h"
/**
 * get_op_func - Sélectionne la fonction correcte pour l'opération.
 * @s: Le symbole de l'opération (ex: "+", "-").
 * Return: Un pointeur vers la fonction correspondante, ou NULL si non trouvé.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add}, /* ops[0] */
{"-", op_sub}, /* ops[1] */
{"*", op_mul}, /* ops[2] */
{"/", op_div}, /* ops[3] */
{"%", op_mod}, /* ops[4] */
{NULL, NULL}   /* ops[5] */
};
int i = 0;
/* index parcourir ops */
while (ops[i].op != NULL)
/* parcourir ops tant qu'il est différent NULL*/
{
if (s[1] == '\0' && *ops[i].op == *s)
/* vérification un seul opérateur et non plusieurs */
/* vérification valeur élément ops et s correspondant */
return(ops[i].f);
/* si correspondance appel de la fonction  */
i++;
/* si pas de correspondance incrémentation i prochaine élément */
}
return (NULL);
}
