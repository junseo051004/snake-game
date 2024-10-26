#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

int main() {
	unsigned int a;
	scanf("%u", &a);
	int b = 10;
	int c = 0;
	int d = 1;

	for (int i = 0; i < 8; i++) {
		if (a % b == 1) {
			c += d;
		}
		a = a / b;
		d = d * 2;
	}
	printf("%d ", c);
	printf("%X", c);
}
