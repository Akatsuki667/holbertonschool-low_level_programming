#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplier les arguments
 * @argc: nd d'arguments ligne de commande
 * @argv: tableau arguments ligne de commande
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
/* Vérifie si le nombre d'arguments est correct */
{
printf("Error\n");
/* Affiche "Error" si le nombre d'arguments est incorrect */
return (1);
/* Retourne 1 pour indiquer une erreur */
}
/* Convertit les arguments en entiers */
int num1 = atoi(argv[1]);
/* Convertit le premier argument (argv[1]) en entier */
int num2 = atoi(argv[2]);
/* Convertit le deuxième argument (argv[2]) en entier */

/* Effectue la multiplication et affiche le résultat */
int result = num1 * num2; /* Multiplie les deux nombres */
printf("%d\n", result); /* Affiche le résultat suivi d'un saut de ligne */
return (0);
/* Retourne 0 pour indiquer que le programme s'est exécuté avec succès */
}
