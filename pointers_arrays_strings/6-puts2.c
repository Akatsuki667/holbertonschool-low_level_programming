#include "main.h"
/**
 * puts2 - description
 * _putchar - description
 * @str: description
 */
void puts2(char *str)
{
int i = 0;
int len = 0;
/* permet l'imitation de l'index, évite prise en compte valeur parasite */
while (str[len] != '\0')
{
len++;
}
while (i < len)
{
_putchar(i[len])
i += 2;
}
_putchar('\n');
}
