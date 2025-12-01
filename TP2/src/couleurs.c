#include <stdio.h>

struct Couleur {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
};

int main() {
    struct Couleur couleurs[10] = {
        {0xEF, 0x78, 0x12, 0xFF},
        {0x2C, 0xC8, 0x64, 0xFF},
        {0x00, 0x80, 0xFF, 0xFF},
        {0xFF, 0x00, 0x00, 0xFF},
        {0x00, 0xFF, 0x00, 0xFF},
        {0x00, 0x00, 0xFF, 0xFF},
        {0xFF, 0xFF, 0x00, 0xFF},
        {0xFF, 0x00, 0xFF, 0xFF},
        {0x00, 0xFF, 0xFF, 0xFF},
        {0x80, 0x80, 0x80, 0xFF}
    };

    for (int i = 0; i < 10; i++) {
        printf("\nCouleur %d :\n", i + 1);
        printf("Rouge  : %d\n", couleurs[i].R);
        printf("Vert   : %d\n", couleurs[i].G);
        printf("Bleu   : %d\n", couleurs[i].B);
        printf("Alpha  : %d\n", couleurs[i].A);
    }

    return 0;
}
