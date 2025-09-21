#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

int main(void) {

    int a, b, c ,d ,res;
    scanf("%d %d %d" , &a, &b, &c);


    if (a > b) { int tmp = a; a = b; b = tmp; }
    if (b > c) { int tmp = b; b = c; c = tmp; }
    if (a > b) { int tmp = a; a = b; b = tmp; }

  
    d = a + b;

    if (c < d) {
        res = a + b + c;
    }
    else {
        res = 2*(a + b) - 1;
    }

    printf("%d\n", res);

    return 0;
}
