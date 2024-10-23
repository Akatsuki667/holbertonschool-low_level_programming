#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet < 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}

#endif /* MAIN_H */
