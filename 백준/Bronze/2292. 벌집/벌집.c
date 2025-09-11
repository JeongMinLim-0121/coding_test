#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

int main(void) {

    int N;
    scanf("%d" , &N);

    int layer = 1;
    int end = 1;

    while (N > end) {
        end += 6 * layer;
        layer++;
    }
    printf("%d\n", layer);

    return 0;
}