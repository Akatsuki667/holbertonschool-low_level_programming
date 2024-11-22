#include "variadic_functions.h"
/**
 * print_all - Prints anything based on a format string
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str;
char *sep = "";
va_start(args, format);
while (format && format[i]) /* First while loop */
{
if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
{
printf("%s", sep);
if (format[i] == 'c') /* Print character */
printf("%c", va_arg(args, int));
if (format[i] == 'i') /* Print integer */
printf("%d", va_arg(args, int));
if (format[i] == 'f') /* Print float */
printf("%f", va_arg(args, double));
if (format[i] == 's') /* Print string */
{
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
}
sep = ", ";
}
i++;
}
va_end(args);
printf("\n");
}
