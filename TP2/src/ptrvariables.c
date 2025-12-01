#include <stdio.h>

int main() {
    // Déclaration des variables
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x12345678;
    long long int lli = 0x123456789ABCDEF0;
    float f = 3.14f;
    double d = 6.28;
    long double ld = 9.42L;

    // Pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");
    printf("Adresse de c  : %p, Valeur : %x\n", (void*)pc, (unsigned int)c);
    printf("Adresse de s  : %p, Valeur : %x\n", (void*)ps, (unsigned int)s);
    printf("Adresse de i  : %p, Valeur : %x\n", (void*)pi, i);
    printf("Adresse de li : %p, Valeur : %lx\n", (void*)pli, *pli);
    printf("Adresse de lli: %p, Valeur : %llx\n", (void*)plli, *plli);
    printf("Adresse de f  : %p, Valeur : %x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d  : %p, Valeur : %llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : (non portable)\n", (void*)pld);

    // Manipulation via pointeurs
    *pc += 1;
    *ps += 1;
    *pi += 1;
    *pli += 1;
    *plli += 1;
    *pf += 1.0f;
    *pd += 1.0;
    *pld += 1.0L;

    printf("\nAprès la manipulation :\n");
    printf("Adresse de c  : %p, Valeur : %x\n", (void*)pc, (unsigned int)c);
    printf("Adresse de s  : %p, Valeur : %x\n", (void*)ps, (unsigned int)s);
    printf("Adresse de i  : %p, Valeur : %x\n", (void*)pi, i);
    printf("Adresse de li : %p, Valeur : %lx\n", (void*)pli, *pli);
    printf("Adresse de lli: %p, Valeur : %llx\n", (void*)plli, *plli);
    printf("Adresse de f  : %p, Valeur : %x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d  : %p, Valeur : %llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : (non portable)\n", (void*)pld);

    return 0;
}
