#ifndef CALC_H
#define CALC_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
/* pointeur stocke caractère (opérateurs de calcul) */
int (*f)(int a, int b);
/* pointeur de fonction faisant l'opération */
} op_t;
/* alias struct op */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
