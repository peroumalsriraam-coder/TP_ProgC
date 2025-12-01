#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct {
    unsigned char R, G, B, A;
} Couleur;

typedef struct {
    Couleur couleur;
    int count;
} CouleurCompteur;

int main() {
    Couleur tab[SIZE];
    CouleurCompteur distinct[SIZE];
    int nb_distinct = 0;

    // Initialisation aléatoire des couleurs
    for (int i = 0; i < SIZE; i++) {
        tab[i].R = rand() % 256;
        tab[i].G = rand() % 256;
        tab[i].B = rand() % 256;
        tab[i].A = rand() % 256;
    }

    // Compter les couleurs distinctes
    for (int i = 0; i < SIZE; i++) {
        int found = -1;
        for (int j = 0; j < nb_distinct; j++) {
            if (tab[i].R == distinct[j].couleur.R &&
                tab[i].G == distinct[j].couleur.G &&
                tab[i].B == distinct[j].couleur.B &&
                tab[i].A == distinct[j].couleur.A) {
                found = j;
                break;
            }
        }
        if (found == -1) {
            distinct[nb_distinct].couleur = tab[i];
            distinct[nb_distinct].count = 1;
            nb_distinct++;
        } else {
            distinct[found].count++;
        }
    }

    // Affichage
    for (int i = 0; i < nb_distinct; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinct[i].couleur.R,
               distinct[i].couleur.G,
               distinct[i].couleur.B,
               distinct[i].couleur.A,
               distinct[i].count);
    }

    return 0;
}
