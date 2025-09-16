#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS


#define MAX 1000000
int compare(const void* a, const void* b) {
    const int* pa = (const int*)a;
    const int* pb = (const int*)b;
    if (pa[1] != pb[1]) return pa[1] - pb[1];  
    return pa[0] - pb[0];                      
}

int main(void) {

    int num;
    int point[MAX][2];

    scanf("%d" , &num);
     
    for (int i = 0; i < num; i++) {
        scanf("%d %d", &point[i][0], &point[i][1]);
    }
     
    qsort(point, num, sizeof(point[0]), compare);

 
    for (int i = 0; i < num; i++) {
         printf("%d %d \n", point[i][0], point[i][1]);
    }

    
    return 0;
}