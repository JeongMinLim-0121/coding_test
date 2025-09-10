#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
int main(void) {

    int n;
    int DCash[1000];
    int cCash;
    int rest;

    int QCnt=0;
    int DCnt = 0;
    int NCnt = 0;
    int PCnt = 0;

    scanf("%d" , &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &DCash[i]);
    }

    for (int i = 0; i < n; i++) {

        QCnt = DCash[i] / 25;
        cCash = DCash[i] % 25;
       
        DCnt = cCash / 10;
        cCash = cCash % 10;

        NCnt = cCash / 5;
        cCash = cCash % 5;

        PCnt = cCash / 1;
        cCash = cCash % 1;

        printf("%d %d %d %d \n", QCnt, DCnt, NCnt, PCnt);

    }

    return 0;
}