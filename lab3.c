#include <stdio.h>

int main()
{
    int a, b, c;
    scanf_s("%d", &a);
    printf("\n");
    printf("2) %x\n", a);
    printf("\n");
    b = a << 3;
    printf("3) %o %o\n", a, b);
    printf("\n");
    c = ~a;
    printf("4) %o %o\n", a, c);
    printf("\n");
    scanf_s("%o", &b);
    printf("\n");
    printf("5) %o", a & b);
}

