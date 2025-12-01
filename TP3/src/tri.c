#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
    int tab[SIZE];
    srand(time(NULL));

    // Remplissage aléatoire
    for (int i = 0; i < SIZE; i++)
        tab[i] = rand() % 200 - 100; // valeurs -100 à 99

    printf("Tableau non trié :\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", tab[i]);
    printf("\n");

    // Tri à bulles
    for (int i = 0; i < SIZE-1; i++) {
        for (int j = 0; j < SIZE-i-1; j++) {
            if (tab[j] > tab[j+1]) {
                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }

    printf("Tableau trié :\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
