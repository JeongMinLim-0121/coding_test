#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

int main(void) {

    char str[101];
    char c;
    int cnt =0;

    scanf("%s", str);

    int len = strlen(str);
    cnt = len;

    for (int i=0; i < len;i++) {
        
        c = str[i];
       
        if (c == '-' || c == '=') {
            
            cnt--;
        }else if(c == 'l' || c == 'n') {
              if(i+1 < len && str[i + 1] == 'j'){
                    cnt--;
        
              }
        }
        else if (c == 'd') {

            if ((i + 2 < len && str[i + 1] == 'z' && str[i + 2] == '=')) {
                cnt--;

            }
         }
        
    }

    printf("%d\n", cnt);
    return 0;
}