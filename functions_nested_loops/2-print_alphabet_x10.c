#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - description
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int x;
for (x = 0; x < 10; x++)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
}
_putchar('\n');
}
