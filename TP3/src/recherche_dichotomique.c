#include <stdio.h>

#define SIZE 100

int main() {
    int tab[SIZE];
    // Tableau trié 0..99
    for (int i = 0; i < SIZE; i++)
        tab[i] = i;

    printf("Tableau trié :\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", tab[i]);
    printf("\n");

    int x;
    printf("Entrez l'entier à chercher : ");
    scanf("%d", &x);

    int gauche = 0, droite = SIZE-1, found = 0;
    while (gauche <= droite) {
        int mid = (gauche + droite) / 2;
        if (tab[mid] == x) {
            found = 1;
            break;
        } else if (tab[mid] < x)
            gauche = mid + 1;
        else
            droite = mid - 1;
    }

    if (found)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
