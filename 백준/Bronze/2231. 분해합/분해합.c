#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

 int main(void) {

     int num;
     int result = 0;   
     scanf("%d", &num);

     for (int i = 1; i < num; i++) {
         int sum = i;
         int temp = i;

         while (temp > 0) {
             sum += temp % 10;
             temp /= 10;
         }

         if (sum == num) {
             result = i;
             break;
         }

      }

     printf("%d\n", result);

     return 0;

 }