#include <unistd.h>

/* _putchar - description */

int _putchar(char c)
{
return write(1, &c, 1);
}
