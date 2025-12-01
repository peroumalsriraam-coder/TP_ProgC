#include <stdio.h>

int main() {

    // Tableaux pour stocker les informations des étudiants
    char noms[5][30] = {
        "Dupont", "Martin", "Durand", "Bernard", "Petit"
    };

    char prenoms[5][30] = {
        "Alice", "Louis", "Emma", "Thomas", "Lina"
    };

    char adresses[5][50] = {
        "10 Rue de Paris",
        "25 Avenue de Lyon",
        "5 Boulevard de Marseille",
        "12 Rue Victor Hugo",
        "3 Impasse des Lilas"
    };

    // Notes dans les deux modules
    float noteProg[5] = {14.5, 12.0, 16.5, 10.0, 18.0};
    float noteSys[5]  = {15.0, 11.5, 14.0, 9.0, 17.0};

    // Affichage des données
    for (int i = 0; i < 5; i++) {
        printf("\nÉtudiant %d :\n", i + 1);
        printf("Nom           : %s\n", noms[i]);
        printf("Prénom        : %s\n", prenoms[i]);
        printf("Adresse       : %s\n", adresses[i]);
        printf("Note Prog. C  : %.2f\n", noteProg[i]);
        printf("Note Système  : %.2f\n", noteSys[i]);
    }

    return 0;
}
