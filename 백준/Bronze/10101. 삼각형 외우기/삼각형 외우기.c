#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
int main(void) {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    const char* res;
   
    if (a == 60 && b == 60 && c == 60) {
        res = "Equilateral";
    }
    else if(sum == 180) {
        if (a == b || a == c || b == c) {
            res = "Isosceles";
        }
        else {
            res = "Scalene";
        }
    }
    else {
        res = "Error";
    }

    printf("%s" ,res);

    return 0;
}
