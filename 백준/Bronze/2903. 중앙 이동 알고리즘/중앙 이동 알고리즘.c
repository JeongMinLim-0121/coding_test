#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
int main(void) {

    int num;
    int cnt = 2;
    int dotH=1; // 한변
    int dot=1; // 4변

    scanf("%d" , &num);

    for (int i = 0; i < num; i++) {
       
        dotH = (cnt * 2 ) - 1;
        dot = dotH* dotH;
        cnt = dotH;
            
    }
    printf("%d", dot);


    return 0;
}
