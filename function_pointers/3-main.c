#include "3-calc.h"
/**
 * main - multiplication arguments
 * @argc: nd d'arguments ligne de commande
 * @argv: tableau arguments ligne de commande
 * Return: 0
 */
int main(int argc, char *argv[])
{
int num1, num2;
/* stockage entier conversion char to int */
int (*ptr_op)(int, int);
/* pointeur fonction -> appel fonction correspondant à l'opération */
if (argc != 4)
/* vérification nb paramètres */
{
printf("Error\n"); /* message d'erreur */
exit(98); /* sortie de fonction */
}
ptr_op = get_op_func(argv[2]);
/* appel fonction -> assigne l'opérateur au pointeur */
if (ptr_op == NULL)
/* vérification opérateur valide */
{
printf("Error\n"); /* message d'erreur */
exit(99); /* sortie de fonction */
}
num1 = atoi(argv[1]); /* conversion ASCII to int */
num2 = atoi(argv[3]); /* conversion ASCII to int */
if ((ptr_op == op_div || ptr_op == op_mod) && num2 == 0)
/* vérification fonction diviser / modulo && parmaètres valide */
{
printf("Error\n"); /* message d'erreur */
exit(100); /* sortie de fonction */
}
printf("%d\n", ptr_op(num1, num2));
return (0);
}
