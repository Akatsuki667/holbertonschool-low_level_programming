#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>   /* Pour open() */
#include <unistd.h>  /* Pour read(), write(), close() */
#include <stdlib.h>  /* Pour malloc(), free() */

ssize_t read_textfile(const char *filename, size_t letters);

#endif
