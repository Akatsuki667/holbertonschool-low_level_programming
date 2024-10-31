#include "main.h"
/**
 * _atoi - description
 * @s: description
 * Return: nb
 */
int _atoi(char *s)
{
int sign = 1;
/* déclaration varibale récuperation sign */
/* 1 : pour récupérer nb positif */
int num = 0;
/* variable récupération de nb */
int i;
/* index itération *s */
int j;
int check = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
check = 1;
else if (check == 1)
break;
if (s[i] == '-')
sign = sign * (-1);
}
check = 0;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] >= '0' && s[j] <= '9')
{
check = 1;
num = num * 10 + s[j] - '0';
}
else if (check == 1)
break;
}
if (num > 2147483647)
return (2147483647);
else if (num < -2147483648)
return (-2147483648);
return (num *sign);
/* retourner le nb */
}
