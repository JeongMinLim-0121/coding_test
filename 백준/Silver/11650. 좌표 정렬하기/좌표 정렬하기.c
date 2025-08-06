//11650
#include <stdio.h>

    int cmt(const void* a, const void* b) {

        int* pa = *(int**)a;
        int* pb = *(int**)b;

        if (pa[0] != pb[0]) {
            return pa[0] - pb[0];
        }
        return pa[1] - pb[1];
    }

    int main(void) {

        int N = 0;
        scanf("%d",&N);
        
        int** arrA = (int**)malloc(N * sizeof(int*));
        for(int i=0; i<N; i++){
            arrA[i] = (int**)malloc(2 * sizeof(int*));
            scanf("%d %d", &arrA[i][0], &arrA[i][1]);
        }

        
        qsort(arrA, N, sizeof(int*), cmt);
        for (int i = 0; i < N; i++) {
            
                 printf("%d %d\n", arrA[i][0], arrA[i][1]);
        }

        return 0;
    }
    