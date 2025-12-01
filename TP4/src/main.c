#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Inclure les headers nécessaires
#include "operator.h"   // pour 4.1
#include "fichier.h"    // pour 4.2
#include "liste.h"      // pour 4.7

// Déclarations des fonctions pour chaque exercice
void exercice_4_1(); // Calcul avec opérateurs
void exercice_4_2(); // Gestion de fichiers
void exercice_4_7(); // Liste de couleurs

int main() {
    int choix;

    printf("Choisissez l'exercice à exécuter :\n");
    printf("1. Exercice 4.1 (Calcul avec opérateurs)\n");
    printf("2. Exercice 4.2 (Gestion de fichiers)\n");
    printf("3. Exercice 4.7 (Liste de couleurs)\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    getchar(); // enlever le \n du buffer

    switch(choix) {
        case 1: exercice_4_1(); break;
        case 2: exercice_4_2(); break;
        case 3: exercice_4_7(); break;
        default: printf("Choix invalide.\n"); break;
    }

    return 0;
}



void exercice_4_1() {
    int num1, num2;
    char op;

    printf("Exercice 4.1 : Calcul avec opérateurs\n");
    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    int resultat;
    switch(op) {
        case '+': resultat = somme(num1, num2); break;
        case '-': resultat = difference(num1, num2); break;
        case '*': resultat = produit(num1, num2); break;
        case '/': resultat = quotient(num1, num2); break;
        case '%': resultat = modulo(num1, num2); break;
        case '&': resultat = et(num1, num2); break;
        case '|': resultat = ou(num1, num2); break;
        case '~': resultat = negation(num1); break;
        default: printf("Opérateur invalide.\n"); return;
    }

    printf("Résultat : %d\n", resultat);
}


void exercice_4_2() {
    int choix;
    char nom[100];
    char message[256];

    printf("Exercice 4.2 : Gestion de fichiers\n");
    printf("Que souhaitez-vous faire ?\n1. Lire un fichier\n2. Écrire dans un fichier\nVotre choix : ");
    scanf("%d", &choix);
    getchar(); // enlever le \n du buffer

    if (choix == 1) {
        printf("Entrez le nom du fichier à lire : ");
        fgets(nom, sizeof(nom), stdin);
        nom[strcspn(nom, "\n")] = 0; // enlever le \n
        lire_fichier(nom);
    } else if (choix == 2) {
        printf("Entrez le nom du fichier dans lequel écrire : ");
        fgets(nom, sizeof(nom), stdin);
        nom[strcspn(nom, "\n")] = 0;
        printf("Entrez le message à écrire : ");
        fgets(message, sizeof(message), stdin);
        message[strcspn(message, "\n")] = 0;
        ecrire_dans_fichier(nom, message);
        printf("Le message a été écrit dans le fichier %s.\n", nom);
    } else {
        printf("Choix invalide.\n");
    }
}


void exercice_4_7() {
    printf("Exercice 4.7 : Liste de couleurs\n");

    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    struct couleur couleurs[10] = {
        {255,0,0,255},{0,255,0,255},{0,0,255,255},{255,255,0,255},{0,255,255,255},
        {255,0,255,255},{128,128,128,255},{255,128,0,255},{0,128,255,255},{128,0,128,255}
    };

    for(int i=0;i<10;i++) insertion(&couleurs[i], &ma_liste);

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);
}

