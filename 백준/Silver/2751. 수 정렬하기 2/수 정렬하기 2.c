#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
 

    int cmp(const  void* a, const  void* b) {
     return (*(int*)a - *(int*)b);
 }

 int main(void) {
     int num1;
     scanf("%d", &num1);
     int* numArr = (int*)malloc(num1 * sizeof(int));

    
     for (int i = 0; i < num1; i++) {
         scanf("%d", &numArr[i]);
     }
     qsort(numArr, num1, sizeof(int), cmp);

     for (int i = 0; i < num1; i++) {
         printf("%d\n", numArr[i]);
     }
     free(numArr);
     return 0;
 }