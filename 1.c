#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[25][60];
int score;

void map() {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 60; j++) {
			if (i == 0 || i == 24) {
				arr[i][j] = 1;
			}
			else {
				if (j == 0 || j == 59) {
					arr[i][j] = 1;
				}
				else {
					arr[i][j] = 0;
				}
			}
		}
		printf("\n");
	}
}
void food() {
	srand(time(NULL));
	int x = rand() % 23 + 1;
	int y = rand() % 58 + 1;
	arr[x][y] = 3;
}
void snake() {
	arr[10][20] = 2;
	arr[11][20] = 2;
	arr[12][20] = 2;
	arr[13][20] = 2;
}
void start() {
	system("cls");
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 60; j++) {
			if (arr[i][j] == 1) {
				printf("¤±");
			}
			else if (arr[i][j] == 0) {
				printf("  ");
			}
			else if (arr[i][j] == 3) {
				printf("##");
			}
			else if (arr[i][j] == 2) {
				printf("¤·");
			}
		}
		printf("\n");
	}
}
int main() {
	while (1)
	{
		map();
		snake();
		food();
		start();
		Sleep(3000);
	}
}