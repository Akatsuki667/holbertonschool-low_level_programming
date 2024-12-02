#include "variadic_functions.h"
/**
 * print_char - Imprime un caractère.
 * @args: Un va_list contenant l'argument à imprimer (un caractère).
 * Description: Cette fonction extrait un caractère du va_list et l'imprime.
 */
void print_char(va_list args)
{
char c; /* stockage caractère extrait arguments variadiques */
c = va_arg(args, int);
/* extraction prochain argument de type int list args */
/* char automatiqument promu à un int (promotion artihmétiques) */
printf("%c", c);
}
/**
 * print_int - Imprime un entier.
 * @args: Un va_list contenant l'argument à imprimer (un entier).
 * Description: Cette fonction extrait un entier du va_list et l'imprime.
 */
void print_int(va_list args)
{
int i;
i = va_arg(args, int);
printf("%d", i);
}
/**
 * print_float - Imprime un flottant.
 * @args: Un va_list contenant l'argument à imprimer (un flottant).
 * Description: Cette fonction extrait un flottant du va_list et l'imprime.
 */
void print_float(va_list args)
{
float f;
f = va_arg(args, double);
/* extraction prochain argument de type double list args */
/* float automatiquement promu en double (promotion artihmétiques)*/
printf("%f", f);
}
/**
 * print_string - Imprime une chaîne de caractères.
 * @args: Un va_list contenant l'argument à imprimer (une chaîne).
 * Description: Cette fonction extrait une chaîne du va_list et l'imprime.
 * Si la chaîne est NULL, elle imprime "(nil)" à la place.
 */
void print_string(va_list args)
{
char *s;
s = va_arg(args, char *);
if (!s)
{
printf("(nil)");
return;
}
printf("%s", s);
}
/**
 * print_all - Imprime en fonction de la chaîne de format.
 * @format: Une chaîne représentant les types d'arguments passés à la fonction.
 * 'c' pour char, 'i' pour entier, 'f' pour float, 's' pour chaîne de caractères.
 * Description: Cette fonction imprime toutes les valeurs fournies comme arguments,
 * en fonction du format spécifié. Si l'argument de type chaîne est NULL,
 * "(nil)" sera imprimé.
 * Elle utilise des arguments variadiques et des pointeurs de fonction pour traiter chaque type.
 * Une nouvelle ligne est imprimée à la fin.
 */
void print_all(const char * const format, ...)
{
print_type types[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};
/* déclaration struct */
va_list args; /* liste d'arguments variadique */
char *separator = ""; /* chaîne vide -> gestion séparateurs */
int i = 0; /* index parocurir format */
int j = 0; /* index parcourir types*/
va_start(args, format);
/* initialisation accès arguments vaiadique */
while (format != NULL && format[i] != '\0')
/* vérification paramètre valide && caractère courant paramètre existe */
/* boucle sur chaque caractère de format */
{
while (types[j].type)
/* parcourir type pour trouver correspondance */
{
if (*types[j].type == format[i])
/* vérification type courant correspondant au type défini dans format */
{
printf("%s", separator);
/* impression séparateur avant argument */
types[j].f(args);
/* appel fonction associé au type courant pour l'imprimer */
separator = ", ";
/* change séparateur pour inclure une virgule et espaxe après le premier argument */
}
j++;
}
j = 0;
/*  Réinitialise l’index j pour le prochain caractère de format */
i++;
/* Incrémente i pour passer au prochain caractère de format */
}
printf("\n");
va_end(args);
}

