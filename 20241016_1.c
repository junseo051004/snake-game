#include <stdio.h> //printf, scanf
#include <limits.h> // char, short, int, MIN MAX
#include<float.h> // float, double, FLT_MIN
typedef unsigned int uint32;
typedef double float64;

void check_mem( char str[]){
	printf("mem size in function: %lu bytes\n", sizeof(str));
}

int main(){
	uint32 ui = 785; //unsigned int ui = 785;
	printf("memory size of ui: %u byte\n", (unsigned) sizeof(ui));
	float64 f64;
	printf("memory size of float64: %lu byte\n", sizeof(f64));
	char str[125];
	printf("memory size of array: %lu byte\n", sizeof(str));
	check_mem( str );
	
	printf("float: %f %f\n", FLT_MIN, FLT_MAX);
	printf("float: %e %e\n", FLT_MIN, FLT_MAX);
	printf("float: %f %f\n", DBL_MIN, DBL_MAX);
	printf("float: %e %e\n", DBL_MIN, DBL_MAX);
	
	int i = 5;
	printf("%d\n", i);
	printf("char: %d %d\n", CHAR_MIN, CHAR_MAX);
	printf("short: %d %d\n", SHRT_MIN, SHRT_MAX);
	printf("int: %d %d\n", INT_MIN, INT_MAX);
	unsigned int ui2;
	printf("unsigned char: 0 %u\n", UCHAR_MAX);
	printf("unsigned short: 0 %u\n", USHRT_MAX);
	printf("unsigned int: 0 %u\n", UINT_MAX);
}
