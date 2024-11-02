#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int sign_bit = 1, number = 0;
while (*s && (*s < '0' || *s > '9'))
{
if (*s == '-')
sign_bit = -sign_bit;
s++;
}
while (*s >= '0' && *s <= '9')
{
if (number > (2147483647 - (*s - '0')) / 10)
{
return (sign_bit == 1 ? 2147483647 : -2147483648);
}
number = (number * 10) + (*s - '0');
s++;
}
return (sign_bit * number);
}
