#include <stdio.h>

/**
  * main - description
  * Return: 0 for success
  */

int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
