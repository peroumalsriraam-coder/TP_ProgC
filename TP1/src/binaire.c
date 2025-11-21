#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for(int i = 0; i < taille; i++) {
        int n = nombres[i];
        printf("Nombre : %d\nBinaire : ", n);

        // On parcourt les 32 bits (pour un int standard)
        for(int j = 31; j >= 0; j--) {
            int bit = (n >> j) & 1;  // Décalage + masque
            printf("%d", bit);
        }

        printf("\n\n");
    }

    return 0;
}
