#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - ajout nb positif
 * @argc: nd d'arguments ligne de commande
 * @argv: tableau arguments ligne de commande
 * Return: 0
 */
int main(int argc, char *argv[])
{
int sum = 0; /* stockage somme des nb */
int i, j; /* variable pour les boucles */
if (argc == 1) /*  si aucun nb passé en argument */
{
printf("0\n"); /* affiche 0 = pas de nb à additionner */
return (0); /* retourne 0, indiquant exécution réussi*/
}
for (i = 1; i < argc; i++)
/* boucle arguments sauf 1 parce que nom_programme */
{
for (j = 0; argv[i][j] != '\0'; j++)
/* boucle chaque caractère du i-ème argument */
{
if (!isdigit(argv[i][j]))
/* vérification caaractère n'est pas un chiffre*/
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
/* convertit char to int fonction atoi()*/
}
printf("%d\n", sum);
return (0);
}
