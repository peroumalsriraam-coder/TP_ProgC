#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11

int main() {
    int tabInt[SIZE];
    float tabFloat[SIZE];

    srand(time(NULL));

    // Remplissage des tableaux avec des valeurs aléatoires
    for (int i = 0; i < SIZE; i++) {
        *(tabInt + i) = rand() % 101;       // 0 à 100
        *(tabFloat + i) = (float)(rand() % 1000) / 100.0; // 0.0 à 9.99
    }

    // Affichage avant multiplication
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(tabInt + i));
    }
    printf("\n");

    printf("Tableau de float (avant) :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", *(tabFloat + i));
    }
    printf("\n");

    // Multiplication par 3 des indices divisibles par 2
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            *(tabInt + i) *= 3;
            *(tabFloat + i) *= 3.0f;
        }
    }

    // Affichage après multiplication
    printf("Tableau d'entiers (après) :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(tabInt + i));
    }
    printf("\n");

    printf("Tableau de float (après) :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", *(tabFloat + i));
    }
    printf("\n");

    return 0;
}

