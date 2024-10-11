#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int max_number(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
	
}
int main() {
	int a, b, c;
	
	
	printf("First number: ");
	scanf("%d", &a);

	printf("Second number: ");
	scanf("%d", &b);

	printf("Third number: ");
	scanf("%d", &c);
	printf("Max number is %d", max_number(a, b, c));
}
*/
/*
int sum_result(int a, int b) {
	int sum = 0;
	for (int i = 1; i < a + 1; i++) {
		if (i % b == 0) {
			sum += i;
		}
	}
	return sum;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Result : %d", sum_result(a, b));
}
*/
/*
int factorial(int a) {
	if (a == 1) {
		return 1;
	}
	else {
		return a * factorial(a - 1);
	}
}
int main() {
	int a;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Factorial of %d is %d", a, factorial(a));
}
*/

int gugudan(int a) {
	for (int i = 2; i < a + 1; i++) {
		printf(" #%ddan#     ", i);
	}
	printf("\n");
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < a + 1; j++) {
			printf(" %d* %d=%2d    ", j, i, j * i);
		}
		printf("\n");
	}
}
int main() {
	int a;
	scanf("%d", &a);
	gugudan(a);
}