#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int arr[25][60];
int a = 10, b= 20; // 뱀의 머리 위치
int score;
int dt = 3; // 방향
int c = 2;
int d, e, f, g;

void map() {
    for (int i = 0; i < 25; i++) { // 맵의 크기와 그 가장자리에 테두리 생성
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
    }
}

void food() { // 무작위에서 먹이 생성
    int x, y;
    do {
        x = rand() % 23 + 1; // 테두리를 제외한 x == 1 ~ 23 사이의 난수 지정
        y = rand() % 58 + 1; // 테두리를 제외한 y == 1 ~ 58 사이의 난수 지정
    } while (arr[x][y] != 0); // 빈 공간에서만 생성
    arr[x][y] = 3; // x,y의 난수에서 먹이 생성
}

void snake() { // 뱀 생성
    a = 10; b = 20; // 뱀 머리 위치
    int g = 10, d = 20 + 1, e = 10, f = 20 + 2;
    arr[a][b] = 4; // 뱀 머리
    arr[g][d] = 2; // 뱀 몸통
    arr[e][f] = 2; // 뱀 꼬리
}

void start() {
    system("cls");

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 60; j++) {
            if (arr[i][j] == 1) { // 테두리
                printf("ㅁ");
            }
            else if (arr[i][j] == 0) { // 빈칸
                printf("  ");
            }
            else if (arr[i][j] == 3) { // 먹이
                printf("##");
            }
            else if (arr[i][j] == 4) { // 뱀 몸
                printf("ㅎ");
            }
            else if (arr[i][j] == 2) { // 뱀 머리
                printf("ㅇ");
            }
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}

void move() {
    int a2 = a, b2 = b;
    if (dt == 1) { //위
        a2 -= 1;
    }
    else if (dt == 2) { //아래
        a2 += 1;
    }
    else if (dt == 3) { // 왼
        b2 -= 1;
    }
    else if (dt == 4) { // 오
        b2 += 1;
    }
    
    if (arr[a2][b2] == 3) {
        score++;
        food();
    }
    
    
    
    
    arr[a2][b2] = 4;
    arr[a][b] = 2;
    arr[g][d] = 2;
    arr[e][f] = 0;
    
    e = g;
    f = d;
    g = a;
    d = b;
    a = a2;
    b = b2;
}

void input() {
    if (_kbhit()) {  // _kbhit 키보드 입력이 있으면 1 없으면 0 
        char c = getch();
        if (c == 'w') { // 위
            dt = 1;
        }
        else if (c == 's') { // 아래
            dt = 2;
        }
        else if (c == 'a') { // 왼쪽
            dt = 3;
        }
        else if (c == 'd') { // 오른쪽
            dt = 4;
        }
    }
}

int main() {
    srand(time(NULL));
    int hg = 2;
    map();
    snake();
    food();
    while (1)
    {
        start();
        input();
        move();
        if (hg > 0) {
            arr[10][20 + hg] = 0;
            hg--;
        }
        Sleep(200);     /// 2.5초 동안 화면 멈춤 후 실행 2500 → 200으로 변경
        
    }
    printf("%d", score);
    return 0;
}