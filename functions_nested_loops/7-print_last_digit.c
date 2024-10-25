#include "main.h"
/**
 * print_last_digit - description
 * @i: description
 * Return: description
  */
int print_last_digit(int i)
{
int last_digit = i % 10;
if (last_digit < 0)
/* Assure que last_digit est positif */
{
last_digit = -last_digit;
}
_putchar(last_digit);
return (last_digit);
}
