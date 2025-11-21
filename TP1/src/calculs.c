#include <stdio.h>

int main() {
    int num1 = 12;    // Premier nombre
    int num2 = 5;     // Deuxième nombre
    char op = '+';    // Opérateur à tester

    int resultat;     // Pour stocker le résultat des opérations

    switch(op) {
        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;
        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;
        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;
        case '/':
            if(num2 != 0) {
                resultat = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zéro\n");
            }
            break;
        case '%':
            if(num2 != 0) {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zéro\n");
            }
            break;
        case '&':
            resultat = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;
        case '|':
            resultat = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;
        case '~':
            resultat = ~num1; // Opérateur NOT uniquement sur num1
            printf("~%d = %d\n", num1, resultat);
            break;
        default:
            printf("Opérateur inconnu\n");
    }

    return 0;
}


