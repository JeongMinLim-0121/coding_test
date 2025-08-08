#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
 int stack[MAX];
 int top = -1;

 void push(char a) { 
     if (top < MAX - 1) {
         stack[++top] = a;
     }
      
 }
 int pull() {
     if (top == -1) {
         
         return -1;
     }
     
     return stack[top--];
    
 }
 
 int empty() {
     
     return(top == -1) ? 1 : 0;
 }

 int main(void) {
     int N = 1;

     scanf("%d", &N);

     char arr[MAX][100];

     for (int i = 0; i < N; i++) {

         scanf("%s",  arr[i]);

     }
      
     for (int i = 0; i < N; i++) {
         top = -1;
         int broken = 0;
         for (int j = 0; j < strlen(arr[i]); j++) {
       
             if (arr[i][j] == '(') {
                 push(arr[i][j]);
               
             }
             else if (arr[i][j] == ')') { 

                 if (pull() == -1) {
                     broken = 1;
                     break;
                 }
               
             }
             
         }
         int res = empty();
       

         if (broken || res == 0) {
             
             printf("NO\n");
         }
         else if (res != 0) {
             printf("YES\n");
         }
        
     }



     return 0;
 }