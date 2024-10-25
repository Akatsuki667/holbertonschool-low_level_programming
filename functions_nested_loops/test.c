#include <stdio.h>

void hours(void) // Fonction hours définie en dehors de main
{
    int h, m;
    for (h = 0; h <= 23; h++) // Boucle pour les heures
    {
        for (m = 0; m <= 59; m++) // Boucle pour les minutes
        {
            printf("%02d:%02d\n", h, m); // Affiche l'heure au format HH:MM
        }
    }
}

int main(void) // Début de la fonction main
{
    hours(); // Appel de la fonction hours
    return 0;
}