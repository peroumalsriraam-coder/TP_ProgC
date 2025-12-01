#include <stdio.h>

int main() {
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 9.5f;
    double d = 3.1415926535;
    long double ld = 1.23456789L;

    unsigned char *p;

    p = (unsigned char*)&s;
    printf("Octets de short :\n");
    for (size_t j = 0; j < sizeof(s); j++)
        printf("%02x ", p[j]);
    printf("\n");

    p = (unsigned char*)&i;
    printf("Octets de int :\n");
    for (size_t j = 0; j < sizeof(i); j++)
        printf("%02x ", p[j]);
    printf("\n");

    p = (unsigned char*)&li;
    printf("Octets de long int :\n");
    for (size_t j = 0; j < sizeof(li); j++)
        printf("%02x ", p[j]);
    printf("\n");

    p = (unsigned char*)&f;
    printf("Octets de float :\n");
    for (size_t j = 0; j < sizeof(f); j++)
        printf("%02x ", p[j]);
    printf("\n");

    p = (unsigned char*)&d;
    printf("Octets de double :\n");
    for (size_t j = 0; j < sizeof(d); j++)
        printf("%02x ", p[j]);
    printf("\n");

    p = (unsigned char*)&ld;
    printf("Octets de long double :\n");
    for (size_t j = 0; j < sizeof(ld); j++)
        printf("%02x ", p[j]);
    printf("\n");

    return 0;
}
