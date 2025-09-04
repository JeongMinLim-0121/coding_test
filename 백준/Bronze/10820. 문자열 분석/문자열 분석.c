#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    char str[1024];
    
    while (fgets(str, sizeof(str), stdin) != NULL) {

        int len = 0;
        int sCnt = 0;       //소문자
        int bCnt = 0;       //대문자
        int nCnt= 0;        //숫자
        int spCnt = 0;       //공백
       
        len = strlen(str);
        
       for (int i=0; i<len; i++) {
          

           if (('a' <= str[i]) && ('z' >= str[i])) {
               sCnt++;
           }
           else if (('A' <= str[i]) && ('Z' >= str[i])) {
               bCnt++;
           }
           else if (('0' <= str[i]) && ('9' >= str[i])) { 
               nCnt++;
           }
           else if (str[i] == ' ') {
               
               spCnt++;
           }
           else if (str[i] == '\n') {
               break;
           }
            
 
        }
       
       printf("%d %d %d %d\n", sCnt, bCnt, nCnt, spCnt);
    }
      

    return 0;
}