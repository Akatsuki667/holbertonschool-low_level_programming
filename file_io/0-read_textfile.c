#include "main.h"
/**
 * read_textfile - lire un fichier et sortir son contenu sur stdout
 * @filename: chemin du fichier à lire
 * @letters: nb maximal de caractère à lire
 * Return: nb réel de caractères lus et affichés ou 0 si échec
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
size_t bytes_read;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == - 1)
return (0);
buffer = malloc(letters);
if (buffer = NULL)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}
write(STDOUT_FILENO, buffer, bytes_read);
free(buffer);
close(fd);
return (bytes_read);
}
