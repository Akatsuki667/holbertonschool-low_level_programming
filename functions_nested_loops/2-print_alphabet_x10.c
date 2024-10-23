#include "main.h"

/**
 * print_alphabet - description
 */

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}

/* print_alphabet_x10 - description */

void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
print_alphabet();
}
}
