#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;  // Programmation en C
    float note2;  // Système d'exploitation
};

int main() {
    struct Etudiant etudiants[5];

    // ---- Étudiant.e 1 ----
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    // ---- Étudiant.e 2 ----
    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    // ---- Étudiant.e 3 ----
    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Emma");
    strcpy(etudiants[2].adresse, "5 Rue Victor Hugo, Paris");
    etudiants[2].note1 = 13.5;
    etudiants[2].note2 = 15.0;

    // ---- Étudiant.e 4 ----
    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Louis");
    strcpy(etudiants[3].adresse, "10 Avenue de Marseille");
    etudiants[3].note1 = 11.0;
    etudiants[3].note2 = 12.7;

    // ---- Étudiant.e 5 ----
    strcpy(etudiants[4].nom, "Petit");
    strcpy(etudiants[4].prenom, "Lina");
    strcpy(etudiants[4].adresse, "3 Impasse des Lilas");
    etudiants[4].note1 = 18.0;
    etudiants[4].note2 = 17.2;

    // ---- Affichage ----
    for (int i = 0; i < 5; i++) {
        printf("\nÉtudiant.e %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prénom  : %s\n", etudiants[i].prenom);
        printf("Adresse");


