#include "main.h"
/**
 * is_prime_helper - helper function to check primality recursively
 * @n: number to check
 * @i: divisor
 * Return: 1 if it is or 0 if it's not
 */
int is_prime_helper(int n, int i)
{
if (i * i > n)
/* Si i*i dépasse n, c'est un nombre premier */
return (1);
if (n % i == 0)
/* Si n est divisible par i, ce n'est pas un nombre premier */
return (0);
return (is_prime_helper(n, i + 1));
/* On vérifie avec le prochain i*/
}
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
/* Si n est inférieur ou égal à 1, ce n'est pas un nombre premier */
return (0);
if (n == 2)
/* 2 est un nombre premier */
return (1);
return (is_prime_helper(n, 2));
/* On commence à vérifier avec i = 2 */
}
