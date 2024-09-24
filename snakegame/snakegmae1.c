#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

void map() {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 21; j++) {
			if (i == 0 || i == 19) {
				printf("¤±");
			}
			else {
				if (j == 0 || j == 19) {
					printf("¤±");
				}
				printf("  ");
			}
		}
		printf("\n");
	}
}
int main() {
	map();
	return 0;
}