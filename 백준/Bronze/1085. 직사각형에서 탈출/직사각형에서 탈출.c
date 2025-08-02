#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
 int compare( int pa, int pb ) {

     return (pa <= pb) ? pa : pb;

 }
 int main(void){

     int x, y, w, h;
     int a,b, c, d;
     int min;

     scanf("%d%d%d%d", &x, &y, &w, &h);

     a = w - x;
     b = h - y;
     
     
    c= compare(a,b);
    d= compare(x,y);
    min = compare(c,d);

    
    printf("%d", min);

 }