#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    char str[1001];
    int T;
    scanf("%d",&T);
    getchar();

    for (int i = 0; i < T; i++) {
        fgets(str, sizeof(str), stdin);

        int len = (int)strlen(str);
        int start = 0;

        for (int i = 0; i < len; i++) {
            if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

                for (int j = i - 1; j >= start; j--) {
                    putchar(str[j]);
                }

                if (str[i] == ' ') {
                    putchar(' ');
                }

                start = i + 1;

            }
        }
        putchar('\n');
    }

    return 0;
}