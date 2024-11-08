#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication arguments
 * @argc: nd d'arguments ligne de commande
 * @argv: tableau arguments ligne de commande
 * Return: 0
 */
int main(int argc, char *argv[])
{
int num1, num2;
/* variable permetant la conversion char to int */
if (argc != 3)
/* vérification nb correct argument */
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]); /* conversion char to int */
num2 = atoi(argv[2]); /* conversion char to int */
printf("%d\n", num1 *num2);
return (0);
}
