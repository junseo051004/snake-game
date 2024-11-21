#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int arr[25][60];
int a = 10, b= 20; // ���� �Ӹ� ��ġ
int score;
int dt = 3; // ����
int c = 2;
int d, e, f, g;

void map() {
    for (int i = 0; i < 25; i++) { // ���� ũ��� �� �����ڸ��� �׵θ� ����
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

void food() { // ���������� ���� ����
    int x, y;
    do {
        x = rand() % 23 + 1; // �׵θ��� ������ x == 1 ~ 23 ������ ���� ����
        y = rand() % 58 + 1; // �׵θ��� ������ y == 1 ~ 58 ������ ���� ����
    } while (arr[x][y] != 0); // �� ���������� ����
    arr[x][y] = 3; // x,y�� �������� ���� ����
}

void snake() { // �� ����
    a = 10; b = 20; // �� �Ӹ� ��ġ
    int g = 10, d = 20 + 1, e = 10, f = 20 + 2;
    arr[a][b] = 4; // �� �Ӹ�
    arr[g][d] = 2; // �� ����
    arr[e][f] = 2; // �� ����
}

void start() {
    system("cls");

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 60; j++) {
            if (arr[i][j] == 1) { // �׵θ�
                printf("��");
            }
            else if (arr[i][j] == 0) { // ��ĭ
                printf("  ");
            }
            else if (arr[i][j] == 3) { // ����
                printf("##");
            }
            else if (arr[i][j] == 4) { // �� ��
                printf("��");
            }
            else if (arr[i][j] == 2) { // �� �Ӹ�
                printf("��");
            }
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}

void move() {
    int a2 = a, b2 = b;
    if (dt == 1) { //��
        a2 -= 1;
    }
    else if (dt == 2) { //�Ʒ�
        a2 += 1;
    }
    else if (dt == 3) { // ��
        b2 -= 1;
    }
    else if (dt == 4) { // ��
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
    if (_kbhit()) {  // _kbhit Ű���� �Է��� ������ 1 ������ 0 
        char c = getch();
        if (c == 'w') { // ��
            dt = 1;
        }
        else if (c == 's') { // �Ʒ�
            dt = 2;
        }
        else if (c == 'a') { // ����
            dt = 3;
        }
        else if (c == 'd') { // ������
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
        Sleep(200);     /// 2.5�� ���� ȭ�� ���� �� ���� 2500 �� 200���� ����
        
    }
    printf("%d", score);
    return 0;
}