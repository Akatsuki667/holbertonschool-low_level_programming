#include "main.h"

void hours(void) // Fonction hours définie en dehors de main
{
    int h, m;

    for (h = 0; h <= 23; h++) // Boucle pour les heures
    {
        for (m = 0; m <= 59; m++) // Boucle pour les minutes
        {
            // Afficher l'heure au format HH:MM
            _putchar('0' + (h / 10)); // Premier chiffre de l'heure
            _putchar('0' + (h % 10)); // Deuxième chiffre de l'heure
            _putchar(':');             // Deux-points
            _putchar('0' + (m / 10)); // Premier chiffre des minutes
            _putchar('0' + (m % 10)); // Deuxième chiffre des minutes
            _putchar('\n');           // Nouvelle ligne
        }
    }
}

int main(void) // Début de la fonction main
{
    hours(); // Appel de la fonction hours
    return 0;
}