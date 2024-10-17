#include <stdio.h>
#include <limits.h>

int main(){
	char a;
	scanf("%c", &a);
	
	
	for(int i = 0; i < 8; i++){
		if(a & 128){
			printf("1");
		}
		else{
			printf("0");
		}
		a <<= 1; // left bit shift
	}
	printf("\n");
}

