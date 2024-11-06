#include <stdio.h>
/**
 * main - afficher argument reçu
 * @argc: nd d'arguments ligne de commande
 * @argv: tableau arguments ligne de commande
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
/* déclaration index, parcourir chaque élément argv */
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
/* à chaque itération affiche contenu de argv[i] */
return (0);
}
