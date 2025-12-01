#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
    int tab[SIZE];
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
        tab[i] = rand() % 200 - 100;

    printf("Tableau :\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", tab[i]);
    printf("\n");

    int x;
    printf("Entrez l'entier à chercher : ");
    scanf("%d", &x);

    int found = 0;
    for (int i = 0; i < SIZE; i++) {
        if (tab[i] == x) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
