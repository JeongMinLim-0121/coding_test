#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char word[1000001];
    int count[26] = {0};
    int max = 0;
    char result = '?';

    scanf("%s", word);  // 공백 없는 문자열 입력

    for (int i = 0; word[i] != '\0'; i++) {
        char ch = toupper(word[i]);  // 대문자로 통일
        count[ch - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
            result = 'A' + i;
        } else if (count[i] == max && max != 0) {
            result = '?';
        }
    }

    printf("%c\n", result);
    return 0;
}
