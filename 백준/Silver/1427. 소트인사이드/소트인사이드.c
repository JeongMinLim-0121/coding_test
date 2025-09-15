#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

int main(void) {
    char  str[100];

    scanf("%s", str);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        int digit = str[i] - '0';
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (str[j] > str[j + 1]) {
                int tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int digit1 = str[n-i-1] - '0';
         printf("%d", digit1);
    }

    return 0;
}