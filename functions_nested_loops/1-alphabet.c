#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - description
 * Return: Always 0.
 */

void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
