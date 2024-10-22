#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - description
 * Return: 0 for success
 */

int main(void)
{
int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (n < 6)
{
printf("Last digit of %d is less than 6 and not 0\n", ld);
}
else if (n > 5)
{
printf("Last digit of %d is greater  than 5\n", ld);
}
else
{
printf("Last digit of %d and is zero\n", ld);
}
return (0);
}
