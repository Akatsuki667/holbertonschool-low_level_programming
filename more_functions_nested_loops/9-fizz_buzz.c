#include <stdio.h>
/**
 * main - description
 * Return: 0 (for success)
 */
int main(void)
{
int i;
/* varibale stockera itération nb */
for (i = 0; i <= 100; i++)
/* boucle itération suite de nb */
{
if (i % 3 == 0)
/* condition si multiple de 3 */
{
printf("Fizz");
/* affiche Fizz au lieu du nb */
}
else if (i % 5 == 0)
/* condition simultiple de 5 */
{
printf("Buzz");
/* affiche Buzz au lieu du nb */
}
else if (i % 3 == 0 && i % 5 == 0)
/* condition multiple de 3 et 5 */
{
printf("FizzBuzz");
/* affiche FizzBuzz au lieu du nb */
}
else
{
printf("%d", i);
}
}
return (0);
}