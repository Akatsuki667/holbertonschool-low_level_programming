#include "main.h"
/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: the int for the paramaters of my function
 * Return: Always 0.
 */
void print_triangle(int size)
/* size = hauteur et largeur triangle */
{
int x, y = 0;
/* x/y = compteur de boucle */
int space;
/* nb d'espaces à imprimer avant # */
if (size > 0)
{
while (y < size)
/* gère chaque ligne du triangle */
{
space = size - y - 1;
/* calcul espace nécessaire avant impression */
/* -1 = space diminue ligne, plus on descend plus le triangle est large */
while (x < size)
/* impression caractère d'une seule ligne */
{
if (space > x)
{
_putchar(' ');
}
else
{
_putchar('#');
}
x++;
}
y++;
x = 0;
_putchar ('\n');
}
}
else
_putchar('\n');
}
