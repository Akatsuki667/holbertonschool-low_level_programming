#include "main.h"
void puts_half(char *str)
{
         char *right_bound = str, *left_bound = str;

         while (*right_bound)
                 right_bound++;
         left_bound = str + ((right_bound + 1 - str) / 2);
         while (*str)
         {
         if (str >= left_bound)
         {
                 _putchar(*str);
                 str++;
         }
         else
                 str++;
         }
         _putchar(10);
}
