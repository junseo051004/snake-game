#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

int main() {
	unsigned int a;
	scanf("%u", &a);
	int count = 0;
	int b = 1;
	int c = 10;

	for (int i = 0; i < 8; i++) {
		if (a % c == 1) {
			count += b;
		}
		b = b * 2;
		a = a / 10;
	}
	printf("%d ", count);
	printf("%X", count);
}