#include <stdio.h>
/**
  *main - prints numbers of base 16 in lowercase
  *Return: 0
*/
int main(void)
{
int x;
int alphabet;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
}
for (alphabet = 'a'; alphabet < 'g'; alphabet++)
{
putchar(alphabet);
}
printf("\n");
return (0);
}
