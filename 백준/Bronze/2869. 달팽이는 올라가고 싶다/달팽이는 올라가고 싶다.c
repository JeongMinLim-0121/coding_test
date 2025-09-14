#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

int main(void) {
    
    int day;
    int night;
    int hight;
    int time;

    scanf("%d %d %d" ,&day, &night ,&hight);

    time = (hight - night + (day - night) - 1) / (day - night);
 
    printf("%d\n" , time);

    return 0;
}