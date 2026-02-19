#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS

int main(void) {

 
	char str[100];
	int bucket[26];

	for (int i = 0; i < 26;  i++) {
		bucket[i] = -1;
	}
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++) {
		int idx = str[i] - 'a';

		if (bucket[idx] == -1) {
			bucket[idx] = i;      
		}

	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", bucket[i]);
	}

	return 0;
}