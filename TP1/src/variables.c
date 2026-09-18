#include <stdio.h>

int main(void)
{
    /* char */
    signed char   sc  = -100;
    unsigned char uc  = 200;

    /* short */
    signed short   ss = -30000;
    unsigned short us = 60000;

    /* int */
    signed int   si = -123456;
    unsigned int ui = 123456;

    /* long int */
    signed long int   sli = -1234567890L;
    unsigned long int uli = 1234567890UL;

    /* long long int */
    signed long long int   slli = -123456789012345LL;
    unsigned long long int ulli = 123456789012345ULL;

    /* float, double, long double : pas de version signed/unsigned */
    float       f  = 3.14159f;
    double      d  = 3.14159265358979;
    long double ld = 3.14159265358979323846L;

    /* Affichage des valeurs */
    printf("signed char             : %d\n", sc);
    printf("unsigned char           : %u\n", uc);

    printf("signed short            : %hd\n", ss);
    printf("unsigned short          : %hu\n", us);

    printf("signed int              : %d\n", si);
    printf("unsigned int            : %u\n", ui);

    printf("signed long int         : %ld\n", sli);
    printf("unsigned long int       : %lu\n", uli);

    printf("signed long long int    : %lld\n", slli);
    printf("unsigned long long int  : %llu\n", ulli);

    printf("float                   : %f\n", f);
    printf("double                  : %lf\n", d);
    printf("long double             : %Lf\n", ld);

    return 0;
}
