#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

int main(void) {

      int n;
      int b;
      char ans[100];  
      int cnt = 0;

    scanf("%d %d", &n, &b);

    while (n > 0) {
        int r;
        r = n % b;

       
        if (r < 10) {
            ans[cnt++] = r + '0';
        }
        else {
            ans[cnt++] = r - 10 + 'A';
        }

        n /= b;
   }
    

    for (int i = cnt - 1; i >= 0; i--) {
        printf("%c", ans[i]);
    }
    printf("\n");

    return 0;
}