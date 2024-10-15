#include <stdio.h> //printf, scanf
#include <limits.h> // char, short, int, MIN MAX
#include<float.h> // float, double, FLT_MIN
typedef unsigned int uint32;
typedef double float64;

int main(){
	int a;
	scanf("%d", &a);
	printf("data type:");
	if(CHAR_MIN < a && a < CHAR_MAX){
		printf("char,");
	}
	if(0 < a && a < UCHAR_MAX){
		printf("unsigned char,");
	}
	if(SHRT_MIN < a && a < SHRT_MAX){
		printf("short,");
	}
	if(0 < a && a < USHRT_MAX){
		printf("unsigned short\n");
	}
}
