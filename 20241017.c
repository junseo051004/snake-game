#include <stdio.h>
#include <limits.h>
typedef	unsigned char uint8;

int count_1bit(uint8 a){
	int count = 0;
	char mem[8];
	
	for(int i=0; i<8;i++){
		if(a & 1){ // & bit wise and.
			count++;
			printf("1");
			mem[i] = '1';
		}
		else {
			printf("0");
			mem[i] = '0';
		}
		a >>= 1; //bit shift right
	}
	printf(" ");
	for(int j=7; j>=0; j--){
		printf("%c", mem[j]);
	}
	printf("\n");
	return count;
}
void print_binary(uint8 a){
	for( int i=0; i<8; i++){
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
int main(){
	uint8 i = UCHAR_MAX;
	printf("UCHAR_MAX %u\n", i);
	count_1bit(12);
	count_1bit(128);
	print_binary(12);
	
	//printf("	%u 1	bit	count	%d\n", i, count_1bit(i)); 
	//printf("	%u 1	bit	count	%d\n", 6, count_1bit(6)); 
}
