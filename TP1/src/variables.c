#include <stdio.h>

int main() {

    // --- char ---
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    // --- short ---
    short s = 123;
    signed short ss = -123;
    unsigned short us = 456;

    // --- int ---
    int i = 1000;
    signed int si = -1000;
    unsigned int ui = 2000;

    // --- long int ---
    long int li = 123456L;
    signed long int sli = -123456L;
    unsigned long int uli = 123456UL;

    // --- long long int ---
    long long int lli = 123456789LL;
    signed long long int slli = -123456789LL;
    unsigned long long int ulli = 123456789ULL;

    // --- float ---
    float f = 3.14f;

    // --- double ---
    double d = 3.14159;

    // --- long double ---
    long double ld = 3.141592653589L;


    // --- AFFICHAGE ---
    printf("char = %c\n", c);
    printf("signed char = %d\n", sc);
    printf("unsigned char = %u\n", uc);

    printf("short = %d\n", s);
    printf("signed short = %d\n", ss);
    printf("unsigned short = %u\n", us);

    printf("int = %d\n", i);
    printf("signed int = %d\n", si);
    printf("unsigned int = %u\n", ui);

    printf("long int = %ld\n", li);
    printf("signed long int = %ld\n", sli);
    printf("unsigned long int = %lu\n", uli);

    printf("long long int = %lld\n", lli);
    printf("signed long long int = %lld\n", slli);
    printf("unsigned long long int = %llu\n", ulli);

    printf("float = %f\n", f);
    printf("double = %lf\n", d);
    printf("long double = %Lf\n", ld);

    return 0;
}
