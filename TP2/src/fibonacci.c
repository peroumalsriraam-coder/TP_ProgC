#include <stdio.h>

int main() {
    int n;
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    int U0 = 0;
    int U1 = 1;

    // Affichage des premiers termes selon n
    if (n >= 0) printf("%d", U0);
    if (n >= 1) printf(", %d", U1);

    // Calcul et affichage des termes suivants
    for (int i = 2; i <= n; i++) {
        int Un = U0 + U1;  // formule Fibonacci
        printf(", %d", Un);

        // mise à jour des termes précédents
        U0 = U1;
        U1 = Un;
    }

    printf("\n");
    return 0;
}

