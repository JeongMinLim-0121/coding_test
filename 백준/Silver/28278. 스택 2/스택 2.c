//28278
#include <stdio.h>

#define max 1000000

int top = -1;
int stack[max];

void push(int x) {
	if (top < max - 1) {
		stack[++top] = x;
	}
}

int pop(){
	if (top == -1) {

		return -1;
	}
	return stack[top--];
}

int peek() {

	if (top == -1) {
		return -1;
	}
	return stack[top];
}

int size() {
	return top + 1;
}

int isEmpty() {
	return(top == -1) ? 1 : 0;
}

int main(void) {

	int num1;
	int num2;

	scanf("%d", &num1);

	for (int i = 0; i < num1; i++) {

		scanf("%d", &num2);

		if (num2 == 1) {
			int num3=0;
			scanf("%d", &num3);
			push(num3);
		}
		else if (num2 == 2) {
		 
			printf("%d\n", pop());
		}
		else if (num2 == 3) {
			
			printf("%d\n", size());
		}
		else if (num2 == 4) {
			
			printf("%d\n", isEmpty());
		}
		else if (num2 == 5) {
			
			printf("%d\n", peek());
		}
		 

	}
 
	return 0;
}