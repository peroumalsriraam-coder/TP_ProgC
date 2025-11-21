#include <stdio.h>

int main() {

    int a = 16;
    int b = 3;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // opérateurs logiques (affichés en 0 = faux, 1 = vrai)
    printf("a == b : %d\n", (a == b));
    printf("a > b  : %d\n", (a > b));

    return 0;
}
