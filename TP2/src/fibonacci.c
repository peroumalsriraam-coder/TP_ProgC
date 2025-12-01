#include <stdio.h>

int main() {
    int n;
    int U0 = 0, U1 = 1, Un;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // Affichage des premiers termes selon n
    if (n >= 0) printf("%d", U0);
    if (n >= 1) printf(", %d", U1);

    // Calcul des termes suivants
    for (int i = 2; i <= n; i++) {
        Un = U0 + U1;
        printf(", %d", Un);
        U0 = U1;
        U1 = Un;
    }

    printf("\n");
    return 0;
}
