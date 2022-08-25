

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {

    long A, B;



    scanf("%ld %ld", &A, &B);

    if (A >= B) printf("%ld", A - B);
    else if (A < B) printf("%ld", B - A);

    return 0;
}