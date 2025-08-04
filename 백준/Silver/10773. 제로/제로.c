#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

    int main() {

        int k, num, sum = 0;
        int stack[100000];
        int top = -1;

        scanf("%d", &k);
 
        for (int i = 0; i < k; i++) {

            scanf("%d", &num);
            if (num == 0 && top >= 0) {
                    top--;
             }
            else {
                 stack[++top] = num;
            }
        }

        for (int i = 0; i <= top; i++) {
            sum += stack[i];
        }

        printf("%d\n", sum);

        return 0;
    }