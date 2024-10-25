#include "main.h"
/**
 * _abs - description
 * @i: description
 * Return: description
 */
int _abs(int i)
{
if (i < 0)
{
int abs = i * -1;
/** 
 * Valeur absolue : valeur sans signe
 * * -1 : permet de remettre la valeur en positif donc sans signe
 */
return (abs);
}
else
{
return (i);
}
}
