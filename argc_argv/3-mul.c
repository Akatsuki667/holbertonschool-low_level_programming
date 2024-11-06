#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication de deux entiers
 * @argc: nd d'arguments ligne de commande
 * @argv: tableau arguments ligne de commande
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
/* on vérifie que l'on as bien 3 argument pour la multiplication */
/*[0] = nom programme */
/*[1] = valeur */
/*[2] = valeur */
{
printf("Error\n");
/* nb arguments incorrect print*/
return (1);
/* nb arguments incorrect return 1 indiquant une erreur*/
}
int num1 = atoi(argv[1]);
/* atoi() = ASCII to integer */
int num2 = atoi(argv[2]);
/* atoi() = ASCII to integer */
int result = num1 * num2;
printf("%d\n", result);
return (0);
}
