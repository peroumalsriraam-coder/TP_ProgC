#include <stdio.h>

int main() {

    char str1[100] = "Hello";
    char str2[100] = " World!";
    char copie[100];
    char concat[200];

    int i = 0;
    int longueur = 0;

    /* ---- 1. Calcul de la longueur de str1 ---- */
    while (str1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de \"%s\" = %d\n", str1, longueur);

    /* ---- 2. Copie de str1 dans copie ---- */
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';  // fin de chaine

    printf("Copie : %s\n", copie);

    /* ---- 3. Concaténation str1 + str2 dans concat ---- */

    // Copier str1 d'abord
    int j = 0;
    while (str1[j] != '\0') {
        concat[j] = str1[j];
        j++;
    }

    // Ajouter str2 à la suite
    int k = 0;
    while (str2[k] != '\0') {
        concat[j] = str2[k];
        j++;
        k++;
    }
    concat[j] = '\0';

    printf("Concaténation : %s\n", concat);

    return 0;
}
