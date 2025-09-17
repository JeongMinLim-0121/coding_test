#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

int main(void) {

    int num;
    int i = 2;

    scanf("%d", &num);

    while (num > 1) {

        if (num % i == 0) {
            printf("%d \n", i);
            num /= i;
        }
        else {
            i++;
        }

    }

    return 0;
}