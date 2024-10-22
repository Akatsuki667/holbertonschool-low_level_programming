#include <stdio.h>

/**
 * main - description
 * Return: 0 for success
 */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'e' || alphabet == 'q')
{
continue;
}
putchar(alphabet);
}
putchar('\n');
return (0);
}
