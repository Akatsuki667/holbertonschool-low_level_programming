#include <stdio.h>
/**
 * main - afficher le nb d'argument
 * @argc: nd d'arguments ligne de commande
 * @argv: tableau arguments ligne de commande
 * Return: 0
 */
int main(int argc, char *argv[])
/* argc = nb d'arguments passés au programme */
/* argv = tableau chaîne de carcatères contenant chaque argument */
{
(void)argv;
/* ignore argv */
/* évite avertissement de compilation */
printf("%d\n", argc - 1);
/* afficher nb d'argument */
/* argc - 1 = exclure nom du programme */
return (0);
}
