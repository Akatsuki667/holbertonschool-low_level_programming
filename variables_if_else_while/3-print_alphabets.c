#include <stdio.h>
#include <ctype.h>

/**
  * main - description
  * Return: 0 for success
  */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
putchar(toupper(alphabet));
}
putchar('\n');
return (0);
}