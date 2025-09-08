#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

int main(void) {

    char jin[1000];
    int num;
    int len;

    scanf("%s %d", jin,&num);

    len = strlen(jin);

    long long result=0;
    long long power = 1;

    for (int i = len - 1; i >= 0; i--) {
        
        int value; 
        
        if(jin[i] >= '0' && jin[i] <= '9'){   
            value = jin[i] - '0';
           
        }
        else {
            value = jin[i] - 'A' + 10;
        }
        
        result += value * power;
        power *= num;

    }
    printf("%lld\n", result);
    

    return 0;
}