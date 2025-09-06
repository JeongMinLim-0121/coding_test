#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

#define MAX 10000   // 스택 최대 크기

int stack[MAX];
int topIdx = -1;    // 스택이 비어있을 때 top = -1

// push: 데이터 삽입
void push(int value) {

    if (topIdx >= MAX - 1) {

        return;
    }
    stack[++topIdx] = value;
}

// pop: 데이터 삭제
int pop() {

    if (topIdx < 0) {

        return -1;
    }
    return stack[topIdx--];
}

//현재스택크기
int size() {

    return topIdx + 1;
}

// empty: 비어있으면 1, 아니면 0
int empty() {

    return (topIdx == -1) ? 1 : 0;
}

// topIdx : 최상단 데이터 확인
int peek() {

    if (topIdx < 0) {

        return -1;
    }
    return stack[topIdx];
}

int main(void) {

    char str[100];
    int M, N;

    scanf("%d", &M);


    for (int i = 0; i < M; i++) {


        scanf("%s", str);

        if (strncmp(str, "push", 4) == 0) {

            scanf("%d", &N);
            push(N);
        }
        else if (strncmp(str, "pop", 3) == 0) {
            printf("%d\n", pop());
        }
        else if (strncmp(str, "size", 4) == 0) {
            printf("%d\n", size());
        }
        else if (strncmp(str, "empty", 5) == 0) {
            printf("%d\n", empty());

        }
        else if (strncmp(str, "top", 3) == 0) {

            printf("%d\n", peek());
        }

    }
    return 0;
}