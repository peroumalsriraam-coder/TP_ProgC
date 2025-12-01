#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
    int tab[SIZE];
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        tab[i] = rand() % 1000 + 1;
    }

    int min = tab[0], max = tab[0];
    for (int i = 1; i < SIZE; i++) {
        if (tab[i] < min) min = tab[i];
        if (tab[i] > max) max = tab[i];
    }

    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
