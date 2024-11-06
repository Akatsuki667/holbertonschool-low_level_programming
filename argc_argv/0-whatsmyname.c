#include <stdio.h>
/**
 * main - programme affiche son nom
 * @argc: nb d'arguments de la ligne de commande
 * @argv: tableau des arguments de la ligne de commande
 * Return: 0
 */
int main(int argc, char *argv[])
/* argc = nb d'arguments passés au programme */
/* argv = tableau chaîne de carcatères contenant chaque argument */
{
(void)argc;
/* indique que l'on ignore argc */
/* permet d'éviter  un avertisssment compilation */
printf("%s\n", argv[0]);
/* afficher nom programme suivi d'un saut de ligne */
/* argv[0] = nom du programme, incluant le chemin*/
return (0);
/* return(0) = termine la focntion main renvoyant son type de retour */
}
