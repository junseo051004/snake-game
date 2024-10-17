#include <stdio.h>	
#include <limits.h>
#include <float.h>

int main(){
	 int ui;
	scanf("%d", &ui);

	printf("사용 가능한 data type:");
	if( CHAR_MIN <= ui && ui <= CHAR_MAX){
		printf("char,");
	}
	if(0 <= ui && ui<=CHAR_MAX){
		printf("unsigned char,");
	}
	if( SHRT_MIN <= ui && ui <= SHRT_MAX){
		printf("short,");
	}
	if( 0 <= ui && ui <= USHRT_MAX){
		printf("unsiged short");
	}


	
}
