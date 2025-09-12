#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
int main(void) {

    long long N;
    scanf("%lld", &N);

    long long x = 1;
    long long s = 1;

    while (s < N) {
        x++;
        s += x;
    }
    long long offset = s - N;
    long long num, den;

    if (x % 2 == 1) {
        num = 1 + offset;
        den = x - offset;
    }
    else {
        num = x - offset;
        den = 1 + offset;
    }

    printf("%lld/%lld\n", num, den);

    return 0;
}
