#include "main.h"
/**
 * print_sign - description
 * @n: description
 * _putchar - description
 * Return: description
 */
int print_sign(int n)
{
int n;
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
