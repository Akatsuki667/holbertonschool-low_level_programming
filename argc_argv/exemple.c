#include <stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
if(argc != 3)
/* Si nb arguments différent de 3 */
{
fprintf(stderr, "Format : programme <IP> <port>\n");

exit(EXIT_FAILURE);
}
printf("Conexion au serveur %s en cours..(port%s)\n", argv [1], argv[2]);
return 0;
}
