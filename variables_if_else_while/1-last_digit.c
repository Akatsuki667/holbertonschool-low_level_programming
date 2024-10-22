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
printf("Last digit of %d is %d", ld, n);
if (ld > 5)
{
printf("Last digit of %d is greater than 5\n", ld);
}
else if (ld == 0)
{
printf("Last digit of %d is zero", ld);
}
else
{
printf("Last digit of %d is less than 6 and not 0", ld);
}
return (0);
}
